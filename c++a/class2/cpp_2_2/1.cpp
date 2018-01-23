//Write a program which does the following:
//Ask the user how many innings today's pitcher pitched, then ask how many runs he gave up.
// Store these values in int variables.
// Calculate pitcher's ERA using the following formula: ERA = runs * 9/ numInnings
// Display the ERA on the screen

#include <iostream>
using namespace std;

int main()
{
  int numInnings, runs;
  
  cout << "How many innings today's pitcher pitched?\n"; // Display the string.
  cin >> numInnings;
  cout << "How many runs you gave up?\n";
  cin >> runs;
  cout << "Your the ERA: " <<  runs * 9/numInnings << endl;

  return 0;
}
