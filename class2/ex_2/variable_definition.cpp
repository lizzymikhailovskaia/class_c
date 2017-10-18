// This program demonstrates late variable definition
#include <iostream>
using namespace std;

int main() {
// Get the annual income.
  cout << "What is your annual income? ";
  double income; // Variable definition
  cin >> income;

  // Get the number of years at the current job.
  cout << "How many years have you worked at " << "your current job? ";
  int years; // Variable definition
  cin >> years;

  // Determine the user's loan qualifications.
  if (income >= 35000 || years > 5)
    cout << "You qualify.\n";
  else
  {
    cout << "You must earn at least $35,000 or have\n";
    cout << "been employed for more than 5 years.\n";
  }
  return 0;
 }
