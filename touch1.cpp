#include<stdio.h>
#include<unistd.h>
int main()
{
//if (fork()){printf("1");
if(!fork()){printf("2");}
//fork();
//printf("3");
//}
//fork();
//printf("4");
//}
return 0;
}
