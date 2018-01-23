#include <iostream>
#include <cmath>
using namespace std;

void displayMenu();
void findSquareArea();
void findCircleArea();
void findTriangleArea();

const double PI = 3.14159;
int choice;
double area;

int main()
{
  displayMenu();
  return 0;
}

void displayMenu(){
     do {
          cout << "//////////////////////////////////////"<< endl;
          cout << "Program to calculate areas of objects \n";
          cout << "1 -- square \n"
               << "2 -- circle \n"
               << "3 -- right triangle \n"
               << "4 -- quit \n";
          cout << "Please enter 1, 2, 3 or 4: ";
          cin >> choice;
          if (choice == 4)
            { cout << "Program quitting now. \n";
            break; }
          if (choice == 1)
            findSquareArea();
          if (choice == 2)
            findCircleArea();
          if (choice == 3)
            findTriangleArea();
          if (choice > 5 || choice < 1)
            cout << "Error: Invalid input. Please enter a number between 1-4. \n";
        }
     while (choice != 4);
}

void findSquareArea(){
  double length;
  cout << "Please enter the length: ";
  cin >> length;
  area = pow(length,2);
  cout << "Area of square = " << area << "\n";
}
void findCircleArea(){
        double radius;
        cout << "Please enter the radius: ";
        cin >> radius;
        area = PI * pow(radius,2);
        cout << "Area of circle = " << area << "\n";
}
void findTriangleArea(){
        double base;
        double height;
        cout << "Please enter the base: ";
        cin >> base;
        cout << "Please enter the height: ";
        cin >> height;
        area = 0.5 * base * height;
        cout << "Area of right triangle = " << area << "\n";
}
