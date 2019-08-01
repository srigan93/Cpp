#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);
void sighandler1(int);

int main () {
   signal(SIGINT, sighandler);
   signal(SIGSEGV,sighandler1);
   
while(1) {
      printf("Main Executing....\n");
      sleep(1); 
   }
   return(0);
}

void sighandler(int signum) {
   //printf("\nCaught signal %d, coming out...\n", signum);
   //sighandler1(signum);
   raise(SIGSEGV);
   printf("\nCaught signal %d, coming out...\n", signum);
   //raise(SIGSEGV);
   exit(1);
}
void sighandler1(int signum){
	printf("\nCaught segmentation fault... %d, crashing...\n",signum);
	//exit(1);
}
