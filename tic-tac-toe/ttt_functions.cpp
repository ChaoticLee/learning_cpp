#include <iostream>

#include <vector>

#include <cmath>

#include "ttt_header.h"

using namespace std;

void printBoard() {
  cout << "1 | 2 | 3\n----------\n4 | 5 | 6\n----------\n7 | 8 | 9\n";
};

vector<string> printBoard(char userChar, vector < string > board) {
  int userNum;

  cout << "please choose a location on the board: \n";
  cin >> userNum;
  //setting board to String 
  board[userNum - 1] = string(1, userChar);
  //just to make it pretty for me
  cout << endl;
   if(playerWin(userChar,board)) { cout << "Player "<<userChar<< " wins!"; 
  return board; 
  }
   //prints updated board.
  cout << board.at(0) << " | " << board.at(1) << " | " << board.at(2) << endl << "----------\n" << board.at(3) << " | " << board.at(4) << " | " << board.at(5) << endl << "----------\n" << board.at(6) << " | " << board.at(7) << " | " << board.at(8) << endl;
  cout << "Next player!\n";
  return board;
};

/*checks to see if the person has won. If it's false, then 
the bool allows the game to continue, if it's true, then it stops the game*/
bool playerWin(char user, vector < string > board) {
string user1 = string(1,user);
  //check horizontal win
  for (int i = 0; i < 9; i += 3) {
    if (board.at(i) == user1 && board.at(i + 1) == user1 && board.at(i + 2) == user1) {
      return true;
    }
  }
  //check diagonal win
  if(board.at(0) == user1 && board.at(4) == user1 && board.at(8) ==user1 || board.at(2) == user1 && board.at(4) == user1 && board.at(6) ==user1 )
  {return true;}
  //checks to see if there is a vertical win
  for (int i = 0; i < 2; ++i) {
    if (board.at(i) == user1 && board.at(i + 3) == user1 && board.at(i + 6) == user1) {
      return true;
    }
  }
  return false;
};

//checks if the board is filled 
bool boardFilled(vector<string> board) {
  bool user;
  vector<string> num = {"1","2","3","4","5","6","7","8","9"};

  for (int i = 0; i < board.size(); ++i) {
   if(board.at(i) == num.at(i)){user = false;}
   else{user = true; };
  };
  return user;
};
