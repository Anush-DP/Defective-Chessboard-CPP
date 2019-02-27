#include<iostream>
#include<cmath>
#include"rlutil.h"
using namespace std;
void print_sq(int n,int in, int Board[][10]);
void ChessBoard(int tr, int tc, int dr, int dc, int size,int Board[][10]);
int Board[10][10];
int main()
{
int n,tr,tc,dr,dc;
cout<<"Enter value of n (2^n x 2^n): ";
cin>>n;
print_sq(pow(2,n),1,Board);
cin>>tr>>tc>>dr>>dc;
ChessBoard(tr,tc,dr,dc,pow(2,n),Board);
cout<<endl;
for(int i=0;i<pow(2,n);i++){
for(int j=0;j<pow(2,n);j++)
cout<<Board[i][j]<<" ";
cout<<endl;
}
Board[dr][dc]=14;
print_sq(pow(2,n),0,Board);
return 0;
}