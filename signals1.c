#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);
void sighandler_term(int);
void sighandler_seg(int);

int main () {
   signal(SIGINT, sighandler);
   signal(SIGTERM, sighandler_term);
   //signal(SIGSEGV, sighandler_seg);
   kill(pid=getpid(),SIGINT);
   while(1) {
      printf("Going to sleep for a second...\n");
      sleep(1); 
   }
   return(0);
}

void sighandler(int signum) {
   printf("Caught signal %d, coming out...\n", signum);
   exit(1);
}
void sighandler_term(int sigsum){
	printf("Caught signal %d to terminate...\n",sigsum);
	signal(SIGSEGV,sighandler_seg);
	printf("Termination aborted due to seg fault \n ");
	exit(1);
}
void sighandler_seg(int sigsum1){
printf("Caught signal to terminate \n");
}
