/* Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped.
It should use the following functions:

void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it.
This function should be called by main once for each of the five scores to be entered.

void calcAverage() should calculate and display the average of the four highest scores.
 This function should be called just once by main, and should be passed the five scores.

int findLowest() should find and return the lowest of the five scores passed to it.
 It should be called by calcAverage, which uses the function to determine one of the five scores to drop.

INPUT VALIDATION: DO NOT ACCEPT TEST SCORES LOWER THAN 0 OR HIGHER THAN 100 */

//Elizaveta Mikhailovskaia.

#include <iostream>
using namespace std;

void getScore();
void calcAverage(int numbers[5]);
int findLowest(int numbers[5]);


int numbers [5];

int main() {
  do {
    getScore();
    calcAverage(numbers);

  } while (true);
  return 0;
}

void getScore(){
  int nNumber;
  for (int count = 0; count < 5; count++) {
    do{
      cout << "Please enter a number: ";
      cin >> nNumber;
      if (nNumber <0 || nNumber >100)
        cout << "Invalid input. The number should be more than 0 and less than 100. \n";
    } while (nNumber <0 || nNumber >100);
    numbers[count] = nNumber;
  }
}

int findLowest(int numbers[5]){
  int minVal = 101;
  int minInd = -1;

  for (int i = 0; i < 5; i++){
    if(i < minVal){
      minVal = numbers[i];
      minInd = i;
    }
  }
  return minInd;
}

void calcAverage(int numbers[5]){
  double sum = 0;
  int average = 0;
  int minInd = findLowest(numbers);
  for (int i = 0; i < 5; i ++){
    if (i != minInd)
      sum = numbers[i] + sum;
  }
  cout << "The average of the four highest scores is " << sum/4 <<endl;
}
