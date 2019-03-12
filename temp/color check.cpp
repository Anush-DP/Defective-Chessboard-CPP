#include<iostream>
#include<cmath>
#include"rlutil.h"
using namespace std;
int main()
{
for(int i=0;i<30;i++){
rlutil::setColor(i);
cout<<"HEllo "<<i<<" "<<i%8+1<<endl;}
return 0;
}