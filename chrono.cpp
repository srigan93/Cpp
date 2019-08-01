#include<iostream>
#include <chrono>
#include<ctime>
using namespace std;
int main()
{

auto timenow = 
      chrono::system_clock::to_time_t(chrono::system_clock::now());

cout << ctime(&timenow) << endl;
return 0;
}
