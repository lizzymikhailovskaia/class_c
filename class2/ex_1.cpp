#include <iostream>
using namespace std;

const int MAX_NUM = 100;

/***** Function declaration (prototype) *****/
void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int guess);
int getMidpoint(int low, int high);

/***** main function *****/
int main() {

        do {
          playOneGame();
        } while (shouldPlayAgain());

        return 0;
}

/***** Function definition (header and body) *****/

// The playOneGame() function has a return type of void. It implements a complete guessing game on the range of 1 to 100. getUserResponseToGuess(), and getMidpoint() should be called inside the playOneGame()


void playOneGame() {
    int low = 1;
    int high = MAX_NUM;
    int guess;
    char response;

    cout << "Think of a number between 1 and " << high << endl;
    guess = getMidpoint(low, high);
    response = getUserResponseToGuess(guess);
    while (response != 'c') {
        if (response == 'l') {
            high = guess - 1;
        } else {
            low = guess + 1;
        }
        guess = getMidpoint(low, high);
        response = getUserResponseToGuess(guess);
    }
}

// This function prompts the user with the phrase “is it <guess>? (h/l/c): “ with the value replacing the token <guess> and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.

char getUserResponseToGuess(int guess)
{
        char input;
        cout << "Is it " << guess << "? (h/l/c): ";
        cin >> input;
        return input;
}


// This function accepts two integers, and returns the midpoint of the two integers.

int getMidpoint(int low, int high) {
    return (low + high) / 2;
}

// The shouldPlayAgain() function has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false.

bool shouldPlayAgain() {
    char response;

    while (response != 'y' && response != 'n') {
      cout << "Ready to play (y/n)? ";
      cin >> response;
    }
    return response == 'y';
}


/*Think of a number between 1 and 100
Is it 50? (h/l/c): c
Ready to play (y/n)? y
Think of a number between 1 and 100
Is it 50? (h/l/c): h
Is it 75? (h/l/c): l
Is it 62? (h/l/c): l
Is it 56? (h/l/c): h
Is it 59? (h/l/c): l
Is it 57? (h/l/c): c
Ready to play (y/n)? n
*/
