#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include<string>
#include <chrono>
#include <thread>
#include <unistd.h>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
using namespace std;

int main() 
{ 
    srand((unsigned)time(0)); 
    int i;
	string s;
a:
    i = (rand()%2); 
	if(i)s="\u2571";
	else s="\u2572";
	usleep(100);
    	cout << s;
	usleep(100);
goto a;
return 0;
}