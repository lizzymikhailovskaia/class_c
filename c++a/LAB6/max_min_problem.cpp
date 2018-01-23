//Elizaveta_Mikhailovskaia
//Write a program that asks the user to enter two numbers.
//The program should use the conditional operator to determine
// which number is the smaller and which is the larger.

#include <iostream>
using namespace std;

int main()
{
  double num1, num2;
  //Get the first number.
  cout << "Enter a number: ";
  cin >> num1;

  //Get the second number.
  cout << "Enter another number: ";
  cin >> num2;
  if (num1 > num2)
    cout << num1 << " is larger than   " <<num2 << "." << endl;
  else if (num2 > num1)
  cout << num2 << " is larger than   " <<num1 << "." << endl;
  else
  cout << num1 << " equal " <<num2 << "." << endl;

return 0;

}
