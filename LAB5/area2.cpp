#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  const double PI = 3.14159;
  int choice;
  double area;

  do {
      cout << "Program to calculate areas of objects \n";
      cout << "1 -- square \n"
           << "2 -- circle \n"
           << "3 -- right triangle \n"
           << "4 -- quit \n";

      cout << "Please enter 1, 2, 3 or 4: ";
      cin >> choice;
  switch(choice) {
  case 1:
        double length;
        cout << "Please enter the length: ";
        cin >> length;
        area = pow(length,2);
        cout << "Area of square = " << area << "\n";
        break;
  case 2:
        double radius;
        cout << "Please enter the radius: ";
        cin >> radius;
        area = PI * pow(radius,2);
        cout << "Area of circle = " << area << "\n";
        break;
  case 3:
        double base;
        double height;
        cout << "Please enter the base: ";
        cin >> base;
        cout << "Please enter the height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of right triangle = " << area << "\n";
        break;
  case 4:
        cout << "Program quitting now. \n";
        break;
  default:
        cout << "Error: Invalid input. Please enter a number between 1-4. \n";
  };
}
while (choice != 4); // returns false
  return 0;
}
