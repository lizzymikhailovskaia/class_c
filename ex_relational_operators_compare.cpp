//Get a character from the user.

#include <iostream>
using namespace std;

int main()
  {
    ch = cin.get();
    // Determine what the user entered.
    if (ch >= '0' && ch <= '9')
      cout << "You entered a digit. \n";
    else if (ch >= 'A' && ch <= 'Z')
      cout << "You entered an uppercase letter.\n ";
    else if (ch >= 'a' && ch <= 'z')
      cout << "You entered a lowercase letter.\n";
    else
    cout << "That is not a digit or letter.\n";
    return 0;
  }
