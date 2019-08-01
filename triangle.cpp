#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	std::cout<<"enter three values:"<<endl;
	std::cin>>a>>b>>c;
	//#std::cout<<a<<b<<c;
	if ( a == b == c) 
	{
		std::cout<<"Equivalteral"<<endl;
	}
	else if ( (a == b) || (b == c) || (c == a) )
	{
		std::cout<<"Isosceles"<<endl;

	}
	else
	std::cout<<"scalene"<<endl;
	return 0;

}
