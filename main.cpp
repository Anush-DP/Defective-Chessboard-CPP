#include<iostream>
#include<cmath>

void print_sq(int n,int in, int** Board);
void ChessBoard(int tr, int tc, int dr, int dc, int size,int** Board);

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

print_sq(n,1,Board);
std::cout<<"Enter the position of defective tile(row & col): ";
std::cin>>r>>c;
dr=int(r-65);
dc=int(c-65);
ChessBoard(0,0,dr,dc,n,Board); //0,0 is the starting position of the board
std::cout<<std::endl;
for(int i = 0;i < n; ++i){
for(int j = 0;j < n; ++j){
Board[i][j]++;
if(Board[i][j]>8) Board[i][j]=Board[i][j]%8+1;
std::cout<<Board[i][j]<<" ";
}
std::cout<<std::endl;
}
Board[dr][dc]=0;
print_sq(n,0,Board);

for(int i = 0; i < n; ++i)
    delete [] Board[i];
delete [] Board;

return 0;
}