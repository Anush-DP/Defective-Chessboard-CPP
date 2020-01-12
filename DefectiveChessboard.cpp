#include<iostream>
#include "DefectiveChessboard.h"
#include "rlutil.h"

namespace DefectiveChessboard
{
  int tile=0;

  void ChessBoard(int tr, int tc, int dr, int dc, int size,int** Board)
  {
  if(size==1) return;
  int t=tile++, s=size/2;

  // cover the sub-chessboard of the top left corner
  if(dr<tr+s && dc<tc+s)
  ChessBoard(tr, tc, dr, dc, s,Board);
  else{Board[tr+s-1][tc+s-1]=t;
  ChessBoard(tr, tc, tr+s-1, tc+s-1, s,Board); }

  // cover the sub-chessboard of the top right corner
  if(dr<tr+s && dc>=tc+s)
  ChessBoard(tr, tc+s, dr, dc, s,Board);
  else{Board[tr+s-1][tc+s]=t;
  ChessBoard(tr, tc+s, tr+s-1, tc+s, s,Board); }

  // cover the sub-chessboard of the down left corner
  if(dr>=tr+s && dc<tc+s)
  ChessBoard(tr+s, tc, dr, dc, s,Board);
  else{Board[tr+s][tc+s-1]=t;
  ChessBoard(tr+s, tc, tr+s, tc+s-1, s,Board); }

  // cover the sub-chessboard of the down right corner
  if(dr>=tr+s && dc>=tc+s)
  ChessBoard(tr+s, tc+s, dr, dc, s,Board);
  else{Board[tr+s][tc+s]=t;
  ChessBoard(tr+s, tc+s, tr+s, tc+s, s,Board); }
  }

  void print_sq(int n,int in,int** Board)
  {
  if(in)
  {
  std::cout<<std::endl<<"     ";
  for(int i=0;i<n;i++)std::cout<<char(i+65)<<' ';
  std::cout<<std::endl;
  std::cout<<"   ";
  std::cout<<"\u2554";//unicode for angled pipes
  for(int j=0;j<(2*n+1);j++)std::cout<<"\u2550";
  std::cout<<"\u2557";//unicode for angled pipes
  std::cout<<std::endl;
  for(int i=0;i<n;i++)
  {	std::cout<<' '<<char(i+65)<<" ";
    std::cout<<"\u2551";		//unicode for ||
    for(int j=0;j<n;j++)
    {
      std::cout<<" ";
      rlutil::setColor(15);
      std::cout<<"\u2586";		//unicode for block(lower 3 quarters)
      rlutil::resetColor();
    }
    std::cout<<" \u2551";
    rlutil::resetColor();
    std::cout<<std::endl;
  }
  std::cout<<"   ";
  std::cout<<"\u255A";	//unicode for angled pipes
  for(int j=0;j<(2*n+1);j++)std::cout<<"\u2550";
  std::cout<<"\u255D";//unicode for angled pipes
  std::cout<<std::endl;
  }
  else
  {
  std::cout<<std::endl<<"     ";
  for(int i=0;i<n;i++)std::cout<<char(i+65)<<' ';
  std::cout<<std::endl;
  std::cout<<"   ";
  std::cout<<"\u2554";//unicode for angled pipes
  for(int j=0;j<(2*n+1);j++)std::cout<<"\u2550";
  std::cout<<"\u2557";//unicode for angled pipes
  std::cout<<std::endl;
  for(int i=0;i<n;i++)
  {	std::cout<<' '<<char(i+65)<<" ";
    std::cout<<"\u2551";
    for(int j=0;j<n;j++)
    {
      std::cout<<" ";
      rlutil::setColor(Board[i][j]);
      std::cout<<"\u2586";		//unicode for block(lower 3 quarters)
      rlutil::resetColor();
    }
    std::cout<<" \u2551";
    rlutil::resetColor();
    std::cout<<std::endl;
  }
  std::cout<<"   ";
  std::cout<<"\u255A";//unicode for angled pipes
  for(int j=0;j<(2*n+1);j++)std::cout<<"\u2550";
  std::cout<<"\u255D";//unicode for angled pipes
  std::cout<<std::endl;
  }
  }

}