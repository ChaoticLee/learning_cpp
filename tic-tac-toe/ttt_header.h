#ifndef TTT_HEADER_H // include guard
#define TTT_HEADER_H

using namespace std; 


void printBoard();
vector<string> printBoard(char userChar,vector<string> board);
bool playerWin(char user,vector<string> board); 
bool boardFilled(vector<string> board); 
#endif 
