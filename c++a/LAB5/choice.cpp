// Lab 6 choice.cpp
// This program illustrates how to use a value-returning
// function to get, validate, and return input data.
// Lizzy Mikhailovskaia
#include <iostream>
#include <cmath>
using namespace std;
// Function prototype
int getChoice(int min, int max);

int main()
{
  cout << "Enter an integer between 1 and 4: ";
  // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
  // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
  int input = getChoice(1, 4);
  cout << "You entered " << input << endl;
}

int getChoice(int min, int max)
{
  int input;
  // Get and validate the input
  cin >> input;
  while (input < min || input > max)
  {
    cout << "Invalid input. Enter an integer between 1 and 4: ";
    cin  >> input;
  }
  return input;
}
