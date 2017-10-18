// This program correctly tests two C-strings for equality
// with the strcmp function.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
  const int SIZE = 40;
  char firstString[SIZE], secondString[SIZE];

  // Get two strings
  cout << "Enter a string: ";
  cin.getline(firstString, SIZE);
  cout << "Enter another string: ";
  cin.getline(secondString, SIZE);

  // Compare them with strcmp.
  if (strcmp(firstString, secondString) == 0)
    cout << "You entered the same string twice.\n";
    else
      cout << "The strings are not the same.\n";
   return 0;
}
