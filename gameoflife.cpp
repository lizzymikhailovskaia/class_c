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
char board[ROWS][COLS]= {
  {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
  {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
  {DEAD, DEAD, LIVE, LIVE, LIVE, DEAD},
  {DEAD, LIVE, LIVE, LIVE, DEAD, DEAD},
  {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD},
  {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD}
};
char quit;

//functions
// bool MakeArray(string filename, char board[][COLS]);
void gameBoard();
void switchBoard ();
void nextState();

int main() {
	for (int l = 0; l < STEPS; l++) {
		nextState();
    switchBoard();
		gameBoard();
    sleep(1);
	}

	return 0;
}

void gameBoard () {
	for (int r=0; r<ROWS; r++) {
		for (int c=0; c<COLS; c++) {
			cout<<board[r][c];
		}
		cout<<endl;
	}
	cout<<endl;
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
      1.	Any live cell with fewer than two live neighbours dies, as if caused by under-population.
      2.	Any live cell with two or three live neighbours lives on to the next generation.
      3.	Any live cell with more than three live neighbours dies, as if by overcrowding.
      4.	Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
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
	for (int r=0; r<ROWS; r++) {
		for (int c=0; c<COLS; c++) {
			board[r][c]=newBoard[r][c];
		}
	}
}
