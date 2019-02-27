#include<iostream>
#include<cmath>
#include"rlutil.h"
using namespace std;
void print_sq(int n,int in, int Board[][10])
{
if(in)
{
cout<<endl<<"     ";
for(int i=0;i<n;i++)cout<<i<<' ';
cout<<endl;
cout<<"   ";
cout<<"\u2554";//unicode for angled pipes
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u2557";//unicode for angled pipes
cout<<endl;
for(int i=0;i<n;i++)
{	cout<<' '<<i<<" ";
	cout<<"\u2551";		//unicode for ||
	for(int j=0;j<n;j++)
	{
		cout<<" ";
		rlutil::setColor(15);
		cout<<"\u2586";		//unicode for block(lower 3 quarters)
		rlutil::resetColor();
	}
	cout<<" \u2551";
	rlutil::resetColor();
	cout<<endl;
}
cout<<"   ";
cout<<"\u255A";	//unicode for angled pipes
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u255D";//unicode for angled pipes
cout<<endl;
}
else
{
cout<<endl<<"     ";
for(int i=0;i<n;i++)cout<<i<<' ';
cout<<endl;
cout<<"   ";
cout<<"\u2554";//unicode for angled pipes
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u2557";//unicode for angled pipes
cout<<endl;
for(int i=0;i<n;i++)
{	cout<<' '<<i<<" ";
	cout<<"\u2551";
	for(int j=0;j<n;j++)
	{
		cout<<" ";
		rlutil::setColor(Board[i][j]);
		cout<<"\u2586";		//unicode for block(lower 3 quarters)
		rlutil::resetColor();
	}
	cout<<" \u2551";
	rlutil::resetColor();
	cout<<endl;
}
cout<<"   ";
cout<<"\u255A";//unicode for angled pipes
for(int j=0;j<(2*n+1);j++)cout<<"\u2550";
cout<<"\u255D";//unicode for angled pipes
cout<<endl;
}
}