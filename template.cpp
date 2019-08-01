#include<iostream>
#include<string>
using namespace std;

template <class T>
void swap_nos(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}
int main()
{

   int a=10;
   int b=15;
   float s=4.4;
   float t=6.6;
   string name1="Sriram";
   string name2="Shoot";
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap_nos(a,b);
   cout<<"After swap a: "<<a<<" b: "<<b<<endl;

   cout<<"Before swap s: "<<s<<" t: "<<t<<endl;
   swap_nos( s, t );
   cout<<"After swap s: "<<s<<" t: "<<t<<endl;

   cout<<"Before swap mr: "<<name1<<" "<<name2<<endl;
   swap_nos(name1,name2);
   cout<<"After swap mr: "<<name1<<" "<<name2<<endl;

return 0;
}


 
