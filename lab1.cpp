// LAB 1.1 Complining and Running Your First Program
// Elizaveta Mikhailovskaia

// greeting.cpp
// This program prints a message to greet the user.

#include <iostream>                     // Needed to do C++ I/O
#include <string>                       // Needed by some compilers to use strings
using namespace std;

int main()
{
  string name;               // This declares a variables to, //Hold the user's name ,//Get the user's name
  cout << "Please enter your first name: ";
  cin >> name;

  // Print the greeting
  cout << "Hello, " << name << "." << endl;

  return 0;
}

// Steps 2 it will display  Hello, Adam.
// Steps 3 I have no eror message
// Step 4 
