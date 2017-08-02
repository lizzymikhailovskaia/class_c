#include <iostream>
#include <string>
#include <fstream>
#include <zconf.h>

using namespace std;

//Global Variables
const int ROWS = 6;
const int COLS = 6;
const int STEPS = 50;
const char LIVE = 'X'; //life cells
const char DEAD = '.'; //dead cells

char newBoard[ROWS][COLS];
char board[ROWS][COLS];
char quit;

//functions
// bool MakeArray(string filename, char board[][COLS]);
void gameBoard();
void switchBoard ();
void nextState();
int menu ();
void initialState (int choice);

int main() {
  int choice = menu();
  initialState(choice);
  for (int l = 0; l < STEPS; l++) {
    gameBoard();
    nextState();
    switchBoard();
    sleep(1);
  }

  return 0;
}

int menu () {
  int choice;
  do {
    cout << "******************************" << endl;
    cout << "Welcome to the Conway's Game of Life" << endl;
    cout << "1. Toad " << endl;
    cout << "2. Beehive" << endl;
    cout << "3. Beacon" << endl;
    cout << "4. Quit" << endl;
    cout << "Please enter a number: ";
    cin >> choice;

    if (choice == 4)
      exit(0);
  } while (choice < 1 || choice > 4);
  return choice;
}

void gameBoard () {
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      cout << board[r][c];
    }
    cout << endl;
  }
  // ANSI codes:
  // \r:   go to the beginning of the line
  // \r[A: go 1 line up
  cout << "\e[A\e[A\e[A\e[A\e[A\e[A\r" << flush;
}

void nextState () {
  for (int r=0; r<ROWS; r++) {
    for (int c=0; c<COLS; c++) {
      int LiveCnt=0;
      if (board[r-1][c-1]==LIVE) {
        LiveCnt++;
      }
      if (board[r-1][c]==LIVE) {
        LiveCnt++;
      }
      if (board[r-1][c+1]==LIVE) {
        LiveCnt++;
      }
      if (board[r][c-1]==LIVE) {
        LiveCnt++;
      }
      if (board[r][c+1]==LIVE) {
        LiveCnt++;
      }
      if (board[r+1][c-1]==LIVE) {
        LiveCnt++;
      }
      if (board[r+1][c]==LIVE) {
        LiveCnt++;
      }
      if (board[r+1][c+1]==LIVE) {
        LiveCnt++;
      }

      /*/
      Rules:
      1.  Any live cell with fewer than two live neighbours dies, as if caused by under-population.
      2.  Any live cell with two or three live neighbours lives on to the next generation.
      3.  Any live cell with more than three live neighbours dies, as if by overcrowding.
      4.  Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
      /*/

      newBoard[r][c] = DEAD;

      if (board[r][c] == LIVE && LiveCnt < 2) { //rule 1
        newBoard[r][c]=DEAD;
      }
      else if (board[r][c]==LIVE && (LiveCnt==2 || LiveCnt==3)) {//rule 2
        newBoard[r][c]=LIVE;
      }
      else if (board[r][c]==LIVE && LiveCnt>3 ) { //rule 3
        newBoard[r][c]=DEAD;
      }
      else if (board[r][c]==DEAD && LiveCnt==3) { //rule 4
        newBoard[r][c]=LIVE;
      }
    }
  }
}

void switchBoard () {
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      board[r][c] = newBoard[r][c];
    }
  }
}

void initialState (int choice) {
  if (choice == 1){
    char newArray[ROWS][COLS] = {
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, DEAD, LIVE, LIVE, LIVE, DEAD},
      {DEAD, LIVE, LIVE, LIVE, DEAD, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD}
    };
    for (int r = 0; r < ROWS; r++) {
      for (int c = 0; c < COLS; c++) {
          board[r][c] = newArray[r][c];
      }
    }
  }
  else if (choice == 2){
     char newArray[ROWS][COLS] = {
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, DEAD, LIVE, LIVE, DEAD, DEAD},
      {DEAD, LIVE, DEAD, DEAD, LIVE, DEAD},
      {DEAD, DEAD, LIVE, LIVE, DEAD, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD}
    };
    for (int r = 0; r < ROWS; r++) {
      for (int c = 0; c < COLS; c++) {
          board[r][c] = newArray[r][c];
      }
    }
  }
  else {
    char newArray[ROWS][COLS] = {
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
      {DEAD, LIVE, LIVE, DEAD, DEAD, DEAD},
      {DEAD, LIVE, LIVE, DEAD, DEAD, DEAD},
      {DEAD, DEAD, DEAD, LIVE, LIVE, DEAD},
      {DEAD, DEAD, DEAD, LIVE, LIVE, DEAD},
      {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD}
    };
    for (int r = 0; r < ROWS; r++) {
      for (int c = 0; c < COLS; c++) {
          board[r][c] = newArray[r][c];
      }
    }
  }
}
