int tile=0;
void ChessBoard(int tr, int tc, int dr, int dc, int size,int Board[][10])
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