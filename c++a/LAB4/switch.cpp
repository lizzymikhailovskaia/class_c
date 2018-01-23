// Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

int main()
{
  int pet;
  char spayed;

  // Menu choice
  cout << "Pet Tag Fee \n";
  cout << "1. Cat \n";›
  cout << "2. Dog \n";

  // Get pet type
  cout << "Enter 1 for cat or 2 for dog: ";
  cin  >> pet;

  // Determine the pet tag fee

  switch(pet) {
    case 1:
    cout << "Has the pet been spayed or neutered (y/n)? ";
    cin  >> spayed;
    if (spayed == 'y' || spayed == 'Y')
    cout << "Fee is $4.00 \n";
    else
    cout << "Fee is $8.00 \n";
    break;

    case 2:
    cout << "Has the pet been spayed or neutered (y/n)? ";
    cin  >> spayed;
    if (spayed == 'y' || spayed == 'Y')
    cout << "Fee is $6.00 \n";
    else
    cout << "Fee is $12.00 \n";
    break;

    default:
    cout << "Only cats and dogs need pet tags. \n";
    break;

    return 0;
  };
}
