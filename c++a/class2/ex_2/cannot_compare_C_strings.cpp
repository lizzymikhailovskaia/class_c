// This program illustrates that you cannot compare C-strings
// with relational operators. Although it appears to test the
// strings for equality, that is NOT what happens.
#include <iostream>
using namespace std;

int main() {
  const int SIZE = 40;
  char firstString[SIZE], secondString[SIZE];

  // Get two strings.
  cout << "Enter a string: ";
  cin.getline(firstString, SIZE);
  cout << "Enter another string: ";
  cin.getline(secondString, SIZE);

  // Can you use the == operator to compare them?
  if (firstString == secondString)
    cout << "You entered the same string twice.\n";
    else
    cout << "The strings are not the same.\n";
  return 0;
  }
