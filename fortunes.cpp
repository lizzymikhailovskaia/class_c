// This fortune telling program will be modified to use a void function
// Lizzy Mikhailovskaia

#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// wtite a prototype for the tellFortune function here.
void  tellFortune();

int numYears, numChildren;

int main()
 {
    cout << "This program can tell your future. \n"
    << "Enter two integers separated by a space: ";
    cin >> numYears >> numChildren;
    tellFortune();
    return 0;
 }

void  tellFortune()
{
  numYears = abs(numYears) % 5; // Convert to a positive integer 0 to 4
  numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5
  cout << "\nYou will be married in " << numYears << " years"
      << " and will have " << numChildren << " children.\n";
}
