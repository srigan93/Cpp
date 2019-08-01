#include<iostream>
using namespace std;
int main()
{
	oddAndEven obj1=new oddAndEven();
	obj1.print_even();
	obj2.print_odd();
	return 0;
}
class oddAndEven
{
void print_even()
{
	for(int i=0;i<=10;i++)
	{
		if( i%2 == 0)
		std::cout<<i<<endl;
	}
	print_odd()
}
void print_odd()
{
	for (int i = 0; i<=10; i++)
	{
		if((i%2)!=0)
		std::cout<<i<<endl;

	}
}
};
