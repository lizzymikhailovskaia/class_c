// Lab 4 petTag.cpp
// This program determines the fee for a cat or dog pet tag.
// It uses nested if/else statements.
// Lizzy Mikhailovskaia.
#include <iostream>
#include <string>
using namespace std;

int main() {
  string pet;         // "cat" or "dog"
  char spayed;        // 'y' or 'n'
  // Get pet type and spaying information
  cout << "Enter the pet type (cat or dog): ";
  cin  >> pet;
  if (pet != "cat" &&  pet != "dog")
    cout << "Only cats and dogs need pet tags."<< endl;
  else
  {
    do
    {
      cout << "Has the pet been spayed or neutered (y/n)? ";
      cin  >> spayed;
    } while (spayed == 'y' && spayed == 'Y' && spayed != 'n'&& spayed != 'N');

    // Determine the pet tag fee
    if (pet == "cat")
    {
      if (spayed == 'y' || spayed == 'Y')
        cout << "Fee is $4.00 \n";
      else
        cout << "Fee is $8.00 \n";
    }
    else if (pet == "dog")
    {
      if (spayed == 'y' || spayed == 'Y')
        cout << "Fee is $6.00 \n";
      else
        cout << "Fee is $12.00 \n";
    }
  }
  return 0;

}
