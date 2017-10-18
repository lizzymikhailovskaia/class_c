// This program uses strcmp to compare the string entered
// by the user with the valid stereo part numbers.
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
const double APRICE = 249.0, // Price A
             BPRICE = 299.0; // Price B
const int SIZE = 9; // Array size
char partNum[SIZE]; // To hold the part number

// Get a part number from the user.
cout << "The stereo part numbers are:\n";
cout << "\tBoom Box, part number S147-29A\n";
cout << "\tShelf Model, part number S147-29B\n";
cout << "Enter the part number of the stereo you\n";
cout << "wish to purchase: ";
cin.width(SIZE); // Restrict input for code safety.
cin >> partNum;

// Set the numeric output formatting.
cout << fixed << showpoint << setprecision(2);

 // Determine and display the correct price.
if (strcmp(partNum, "S147-29A") == 0)
  cout << "The price is $" << APRICE << endl;
else if (strcmp(partNum, "S147-29B") == 0)
  cout << "The price is $" << BPRICE << endl;
else
  cout << partNum << " is not a valid part number.\n";
return 0;
}
