
/*
    Dave Harden
    9/08/14
    CS 110B
    Assignment 3.2

    This program simulates a number guessing game. First, it asks the user if
    they are ready to play. The user may enter 'n' to exit without playing. If
    the user enters 'y', one game is played. During a game, the user is told to
    think of a number. The program will then guess the number. After each guess,
    the user must enter h, l, or c to indicate if it is too high, too low, or
    correct. The program will keep guessing until it prints the correct number.
    After the number has been successfully guessed, the program outputs "Great!"
    and asks the user if they want to play again. The user will be able to play
    games until they stop entering "y". If the user does not enter "y", the
    program exits without further  output.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_NUM = 100;

void playOneGame();
void getUserResponseToGuess(int guess, char& result);
int getMidpoint(int low, int high);


int main() {
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}



/*
   This function plays one game of guessing the number chosen by the user.
   First it prompts the user to think of a number between 1 and MAX_NUM.
   It calls getMidpoint() to get the midpoint, which is the first guess.
   Then, it calls getUserResponseToGuess() to get the user's response to that
   guess. The response is stored in result and is either l, h, or c to indicate
   if the real number is lower, higher, or the same. The function will loop,
   making the guess minus 1 the high point if result is "l" or the low point if
   result is "h". If result is "c" The function ends.

   pre: None
   post: One game of guessing a number has been completed.
*/

void playOneGame() {
    int low = 1;
    int high = MAX_NUM;
    int guess;
    char result;

    cout << "Think of a number between 1 and " << high << endl;
    guess = getMidpoint(1, high);
    getUserResponseToGuess(guess, result);
    while (result != 'c') {
        if (result == 'l') {
            high = guess - 1;
        } else {
            low = guess + 1;
        }
        guess = getMidpoint(low, high);
        getUserResponseToGuess(guess, result);
    }
}



/*
   This function asks the user if the integer guess is correct and prompts
   them to enter h, l, or c. The user's response is stored in result pass
   by reference.

   pre: guess is between 0 and MAX_NUM
   post: result contains either h, l, or c
*/

void getUserResponseToGuess(int guess, char& result) {
    cout << "Is it " << guess << " (h/l/c)?";
    cin >> result;
}



/*
   Returns the midpoint between the two integers low and high.

   pre: none
   post: returns the integer midpoint of low and high.
*/

int getMidpoint(int low, int high) {
    return (low + high) / 2;
}
