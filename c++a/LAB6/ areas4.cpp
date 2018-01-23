#include <iostream>
#include <cmath>
using namespace std;

void displayMenu();
double findSquareArea();
double findCircleArea();
double findTriangleArea();
int getChoice(int min, int max);

const double PI = 3.14159;
int choice;
double area;

int main() {
  displayMenu();
  return 0;
}

void displayMenu() {
  do {
    cout << "//////////////////////////////////////"<< endl;
    cout << "Program to calculate areas of objects \n";
    cout << "1 -- square \n"
         << "2 -- circle \n"
         << "3 -- right triangle \n"
         << "4 -- quit \n";
    cout << "Please enter 1, 2, 3 or 4: ";
    choice = getChoice(1, 4);
    if (choice == 4) {
      cout << "Program quitting now. \n";
      break;
    }
    if (choice == 1) {
      double res = findSquareArea();
      cout << "Area = " << res << endl;
    }
    if (choice == 2) {
      double res = findCircleArea();
      cout << "Area = " << res << endl;
    }
    if (choice == 3) {
      double res = findTriangleArea();
      cout << "Area = " << res << endl;
    }
  } while (choice != 4);
}

int getChoice(int min, int max) {
  int input;
  // Get and validate the input
  cin >> input;
  while (input < min || input > max) {
    cout << "Invalid input. Enter an integer between 1 and 4: ";
    cin  >> input;
  }
  return input;
}

double findSquareArea() {
  double length;
  cout << "Please enter the length: ";
  cin >> length;
  area = pow(length, 2);
  return area;
}
double findCircleArea() {
  double radius;
  cout << "Please enter the radius: ";
  cin >> radius;
  area = PI * pow(radius, 2);
  return area;
}
double findTriangleArea() {
  double base;
  double height;
  cout << "Please enter the base: ";
  cin >> base;
  cout << "Please enter the height: ";
  cin >> height;
  area = 0.5 * base * height;
  return area;
}
