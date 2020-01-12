#ifndef DEFECTIVECHESSBOARD_H
#define DEFECTIVECHESSBOARD_H

namespace DefectiveChessboard
{
  //Printing the chessboard on the console/screen
  void print_sq(int n,int in,int** Board);
  
  //Defective chessboard algorithm
  void ChessBoard(int tr, int tc, int dr, int dc, int size,int** Board);
}

#endif