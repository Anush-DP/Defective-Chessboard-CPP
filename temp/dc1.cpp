#include<iostream>
#include<cmath>
#include"rlutil.h"
using namespace std;
void print_sq(int n);
void ChessBoard(int tr, int tc, int dr, int dc, int size);
int tile=0,Board[10][10];
int main()
{
int n,tr,tc,dr,dc;
cout<<"Enter value of n (2^n x 2^n): ";
cin>>n;
print_sq(pow(2,n));
cin>>tr>>tc>>dr>>dc;
ChessBoard(tr,tc,dr,dc,pow(2,n));
for(int i=0;i<pow(2,n);i++){
for(int j=0;j<pow(2,n);j++)
cout<<Board[i][j]<<" ";
cout<<endl;
}
return 0;
}

void ChessBoard(int tr, int tc, int dr, int dc, int size)
{
if(size==1) return;
int t=tile++, s=size/2;
// cover the sub-chessboard of the top left corner
if(dr<tr+s && dc<tc+s)
ChessBoard(tr, tc, dr, dc, s);
else{Board[tr+s-1][tc+s-1]=t;
ChessBoard(tr, tc, tr+s-1, tc+s-1, s); }
// cover the sub-chessboard of the top right corner
if(dr<tr+s && dc>=tc+s)
ChessBoard(tr, tc+s, dr, dc, s);
else{Board[tr+s-1][tc+s]=t;
ChessBoard(tr, tc+s, tr+s-1, tc+s, s); }
// cover the sub-chessboard of the down left corner
if(dr>=tr+s && dc<tc+s)
ChessBoard(tr+s, tc, dr, dc, s);
else{Board[tr+s][tc+s-1]=t;
ChessBoard(tr+s, tc, tr+s, tc+s-1, s); }
// cover the sub-chessboard of the down right corner
if(dr>=tr+s && dc>=tc+s)
ChessBoard(tr+s, tc+s, dr, dc, s);
else{Board[tr+s][tc+s]=t;
ChessBoard(tr+s, tc+s, tr+s, tc+s, s); }
}