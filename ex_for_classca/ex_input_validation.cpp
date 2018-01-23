#include <iostream>
using namespace std;

int main()

{ double number;
  cout << "Enter a number less than 10: ";
  cin >> number;
  while (number >= 10)
  {
    cout << "Invalid Entry!"
    <<"Enter a number less than 10: ";
    cin >> number;
  }

  return 0;
}
