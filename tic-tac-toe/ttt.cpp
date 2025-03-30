#include <iostream>
#include <vector> 
#include <cmath>
#include "ttt_header.h"

using namespace std; 

main(){
int count = 1;
vector<string> board = {"1","2","3","4","5","6","7","8","9"};
char userInput, oppInput;
printBoard(); 

cout <<"please choose a letter: X or O\n";
cin >>  userInput; 
while(userInput != 'X' && userInput != 'O')
{
  cout <<"Please choose either X or O: \n"; 
  cin >> userInput; 
}
if(toupper(userInput) == 'X')
{
  oppInput = 'O';
}
else{ oppInput = 'X';}; 

while(!playerWin(userInput, board) && !playerWin(oppInput,board)&& !boardFilled(board))
{
  
  if(count % 2 == 0)
  {
    board = printBoard(oppInput, board); 
  }
  else {
    board = printBoard(userInput, board);
  }
count++; 
}
};
