// Lab 6 swapNums.cpp -- Using Value and Reference Parameters
// This program uses a function to swap the values in two variables.
// Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

void swapNums(int&, int&);

int main() {
  int num1 = 5, num2 = 7; //Declares 2 variables and assigns a value
  // Print the two variable values
  cout << "In main the two numbers are " << num1 << " and " << num2 << endl;
  // Call a function to swap the values stored
  // in the two variables
  swapNums(num1, num2); // Calls the function and passes the variables
  // Print the same two variable values again
  cout << "Back in main again the two numbers are " << num1 << " and " << num2 << endl;
  return 0;
}
void swapNums(int& a, int& b) {     // Parameter a receives num1 and parameter b receives num2
  // Swap the values that came into parameters a and b 35
  int temp = a; // Declares the tempo and assigns it a value from a
  a = b; // The value a is assigned the value b
  b = temp; // The value b is given by the value a
  // Print the swapped values
  cout << "In swapNums, after swapping, the two numbers are " << a << " and " << b << endl;
}
  // Now displays a message where a = b, b = a
