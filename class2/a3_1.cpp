/* Write a program that plays a number guessing game with a Human user.
 The Human user will think of a number between 1 and 100, inclusive.
 The program will make guesses and the user will tell the program to guess higher or lower.*/

//Lizzy Mikhailovskaia

#include <iostream>
#include <zconf.h>

using namespace std;

int playOneGame();
void getUserResponseToGuess(int guess, char& result);
int getMidpoint(int low, int high);

int main() {
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y' || response == 'Y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
  return 0;
}

int playOneGame(){
  int low = 1;
  int high = 100;
  char answer;
  int guess;
  cout << "Think of a number between 1 and 100. ";
  do {
    guess = getMidpoint(low, high);
    getUserResponseToGuess(guess, answer);
    if (answer == 'l')
      high = guess - 1;
    else if ( answer == 'h')
      low = guess + 1;
    if ( low > high ){
      cout << "Number not found"<< endl;
      break;
    }
  } while (answer != 'c');
  return 0;
}

int getMidpoint(int low, int high){
  if (low == high)
    return low;
  // else if ( (high - low) % 2 > 0)
  //   return low + (high - low)/2 + 1;
  else
    return low + (high - low)/2;
}

void getUserResponseToGuess(int guess, char& result){
  result = ' ';
  while ( result != 'h' && result != 'l' && result != 'c'){
    cout << "Is it " << guess << " (h/l/c)? ";
    cin >> result;
    result = std::tolower(result);
  }
}

/*lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master  g++ -o output a3_1.cpp  && ./output
Ready to play (y/n)? y
Think of a number between 1 and 100. Is it 50 (h/l/c)? y
Is it 50 (h/l/c)? y
Is it 50 (h/l/c)? l
Is it 25 (h/l/c)? h
Is it 37 (h/l/c)? c
Great! Do you want to play again (y/n)? y
Think of a number between 1 and 100. Is it 50 (h/l/c)? h
Is it 75 (h/l/c)? h
Is it 88 (h/l/c)? l
Is it 81 (h/l/c)? c
Great! Do you want to play again (y/n)? y
Think of a number between 1 and 100. Is it 50 (h/l/c)? h
Is it 75 (h/l/c)? h
Is it 88 (h/l/c)? h
Is it 94 (h/l/c)? h
Is it 97 (h/l/c)? h
Is it 99 (h/l/c)? h
Is it 100 (h/l/c)? h
Is it 100 (h/l/c)? h
Number not found
Great! Do you want to play again (y/n)? */
