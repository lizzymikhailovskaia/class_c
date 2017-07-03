// This program average 3 test scores. It repeats as
// many times as the user wishes.

#include <iostream>
using namespace std;

int main()
{
  int score1, score2, score3;
  double average;
  char again;

  do {
    // Get three scores.
    cout << "Enter 3 scores ans I will arerage them: ";
    cin >> score1 >> score2 >> score3;

    // Calculate and display the average.
    average = (score1 + score2 + score3) / 3.0;
    cout << " The average is " << average << ".\n";

    //Does the user want to average another set?
    cout << "Do you want to average another set? (Y/N) ";
    cin >> again;
  } while(again == 'Y' || again == 'y');
  return 0;
}
