// This program demonstrates a variable defined in an inner block.
#include <iostream>
using namespace std;

int main() {
// Get the annual income.
cout << "What is your annual income? ";
double income; //variable definition
cin >> income;

if (income >= 35000) {
// Get the number of years at the current job.
  cout << "How many years have you worked at "  << "your current job? ";
  int years; //variable definition
  cin >> years;

  if (years > 5)
  cout << "You qualify.\n";
  else {
    cout << "You must have been employed for\n";
    cout << "more than 5 years to qualify.\n";
  }
 }
  else {
    cout << "You must earn at least $35,000 to\n";
    cout << "qualify.\n";
  }
return 0;
}
