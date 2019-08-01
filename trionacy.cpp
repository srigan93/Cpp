#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=1,nx1=1,nx2=NULL;
	std::cout<<"***printing trionacci series*** \n ";
	std::cout<<"enter a no:\n";
	std::cin>>n;
	if(n>0)
	{
		std::cout<<"printing trionacci series\n"<<t1<<","<<t2<<","<<"nx1		"<<",";
		nx2=t1+t2+nx1;
		while(nx2 <= n)
		{
			t1=t2;
			t2=nx1;
			nx1=nx2;
			nx2=t1+t2+nx1;
		}
	}
	else
		std::cout<<"Negetive Number\n";
return 0;
}
