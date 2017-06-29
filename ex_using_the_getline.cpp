// This program demonstrates using the geyline function to read
// character data into a string object.

#include <iostream>
#include <string>
using namespace std;

int main()
  {
    string name;
    string city;

    cout << "Please enter your name: ";
    getline (cin, name);
    cout << "Enter the city you live in: ";
    getline ( cin, city);

    cout<< "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
  }
