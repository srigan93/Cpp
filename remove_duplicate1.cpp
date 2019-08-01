#include<iostream>
using namespace std;
int main() 
{ 
   char str[]= "geeksforgeeks"; 
   int n = sizeof(str) / sizeof(str[0]); 
   std::cout << sizeof(str); 
   return 0; 
} 
