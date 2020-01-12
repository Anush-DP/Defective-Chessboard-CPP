#include<iostream>
#include<cmath>
#include<cctype>
#include "DefectiveChessboard.h"

int main()
{
int n,dr,dc;
char r,c;
std::cout<<"Enter value of n (2^n x 2^n): ";
std::cin>>n;
n=pow(2,n);

int **Board= new int*[n];
for(int i = 0; i < n; ++i)
	Board[i] = new int[n];

DefectiveChessboard::print_sq(n,1,Board);
std::cout<<"Enter the position of defective tile(row & col): ";
std::cin>>r>>c;
dr=int(toupper(r)-65);
dc=int(toupper(c)-65);
DefectiveChessboard::ChessBoard(0,0,dr,dc,n,Board); //0,0 is the starting position of the board
std::cout<<std::endl<<"Defective chessboard matrix: "<<std::endl;
for(int i = 0;i < n; ++i){
for(int j = 0;j < n; ++j){
Board[i][j]++;
if(Board[i][j]>8) Board[i][j]=Board[i][j]%8+1;
std::cout<<Board[i][j]<<" ";
}
std::cout<<std::endl;
}
std::cout<<"Defective chessboard visualized:"<<std::endl;
Board[dr][dc]=0;
DefectiveChessboard::print_sq(n,0,Board);

for(int i = 0; i < n; ++i)
    delete [] Board[i];
delete [] Board;

return 0;
}
