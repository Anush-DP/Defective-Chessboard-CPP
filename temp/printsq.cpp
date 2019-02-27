#include<iostream>
#include<cmath>
#include"rlutil.h"
using namespace std;
void print_sq(int n)
{
cout<<endl<<"     ";
for(int i=0;i<n;i++)cout<<i<<' ';
cout<<endl;
cout<<"   ";
cout<<"\u2554";
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u2557";
cout<<endl;
for(int i=0;i<n;i++)
{	cout<<' '<<i<<" ";
	cout<<"\u2551";
	for(int j=0;j<n;j++)
	{
		cout<<" ";
		rlutil::setColor(15);
		cout<<"\u2586";
		rlutil::resetColor();
	}
	cout<<" \u2551";
	rlutil::resetColor();
	cout<<endl;
}
cout<<"   ";
cout<<"\u255A";
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u255D";
cout<<endl;
}