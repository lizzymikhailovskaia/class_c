// This program asks the user to enter the length and width of a
//rectangle. It calculates the rectangle's area and displays the value
//on the screen.

#include <iostream>
using namespace std;

int main()
  {
    int lenght, width, area;

    cout << "This program calculates the area of a ";
    cout << "rectangle. \n";
    cout << "Enter the lenght and width of the rectangle ";
    cout << "separated by a space. \n";
    cin >> lenght >> width;
    area = lenght * width;
    cout << "The area of the rectangle is " << area << ".\n";

    return 0;
  }
