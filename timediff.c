#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
  time_t sec1,sec2; 
  time(&sec1);
  printf("Seconds since January 1, 1970 = %ld\n", sec1);
  sleep (5);
  time(&sec2);
  printf("seconds now =%ld\n",sec2); 
  printf("difference in time %ld\n",sec2-sec1);
  return 0;  
}
