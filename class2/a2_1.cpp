//Write a command line game that plays a simple version of blackjack.
// The program should generate a random number between 1 and 10 each time the player gets a card.
//Each of the values (1 through 10) must be equally likely.

// Lizzy Mikhailovskaia

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int total = 0, firstCard, secondCard, anotherRandomCard;
  char anotherCard = 'y', playAgain = 'y';

  do
    {  // seed the random number generator
    srand(time(0));
    // generate a random number between 1 and 10 each time the player gets a card
    cout << "First cards: ";
    firstCard = 1+(rand()%10);
    secondCard = 1+(rand()%10);
    cout << firstCard << ", " << secondCard << endl;
    total = firstCard + secondCard;
    cout << "Total: " << total << endl;
    cout << "Do you want another card? (y/n): ";
    cin >> anotherCard;
    cin.ignore();
    // user wants another card
  while (anotherCard == 'y' || anotherCard == 'Y')
    {
      anotherRandomCard = 1+(rand()%10);
      cout << "Card: " << anotherRandomCard << endl;
      total += anotherRandomCard;
      cout << "Total: " << total << endl;
      // when total is greater than 21, output bust
      if(total > 21){
        cout << "Bust!" << endl;
        // ask user if they would like to play again
        cout << "Would you like to play again (y/n): ";
        cin >> playAgain;
        cin.ignore();
        if (playAgain == 'y' || playAgain == 'Y' ){
            anotherCard = 'n';
          }
        else
          {
            break;
          }
        }
        // when total is equal to 21, output blackjack
        else if(total == 21) {
          cout << "Blackjack!" << endl;
          // ask user if they would like to play again
          cout << "Would you like to play again? (y/n): ";
          cin >> playAgain;
          cin.ignore();
          if (playAgain == 'y' || playAgain == 'Y') {
              anotherCard = 'n';
            }
              else
            {
              break;
            }
            }
           else
          {
            cout << "Do you want another card? (y/n): ";
            cin >> anotherCard;
            cin.ignore();
            if (anotherCard != 'y')
            {
            cout << "Would you like to play again? (y/n): ";
              cin >> playAgain;
              cin.ignore();
            }
          }
    }
        } while (playAgain == 'y');
        return 0;
}

// Execute the program and copy/paste the output that is produced by your program into the bottom of the source code file:
/* lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master  g++ -o output a2_1.cpp  && ./output
First cards: 5, 3
Total: 8
Do you want another card? (y/n): y
Card: 8
Total: 16
Do you want another card? (y/n): Y
Would you like to play again? (y/n): y
Card: 9
Total: 25
Bust!
Would you like to play again (y/n): n*/
