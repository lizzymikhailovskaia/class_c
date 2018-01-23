//Elizaveta Mikhailovskaia.

#include <iostream>
#include <cmath>
using namespace std;

void areaOfTheCircle();
void areaOfTheRectangle();
void areaOfTheTriangle();

int main() {
int choice;

do {
  cout << "******************************" << endl;
  cout << "Geometry Calculator" << endl;
  cout << "1. Calculate the area of a circle" << endl;
  cout << "2. Calculate the area of a rectangle" << endl;
  cout << "3. Calculate the area of a triangle" << endl;
  cout << "4. Quit" << endl;

  cout << "Please enter a number: ";
  cin >> choice;

  if (choice == 4)
    break;

  else if (choice == 1)
    areaOfTheCircle();

  else if (choice == 2)
    areaOfTheRectangle();

  else if (choice == 3)
    areaOfTheTriangle();

  else if (choice > 5)
    cout << "Invalid input. Please enter a number between 1 to 4"<< endl;

} while (true);
return 0;
}

void areaOfTheCircle(){
  double area, r;
  const double PI = 3.14159;
  do{
  cout << "Please enter the radius: ";
  cin >> r;
  if (r <=0)
    cout << "Invalid input. The value of radius must be greater than 0. \n";
  } while (r <=0);
  area = PI*(r*r);
  cout << "The area of the circle is " << area << "." << endl;
}

void areaOfTheRectangle(){
  double area;
  int length, width;
  do {
    cout << "Please enter the length: ";
    cin >> length;
    cout << "Please enter the width: ";
    cin >> width;
    if (length <=0 || width <=0)
      cout << "Invalid input. The values of length and width must be greater than 0. \n";
  } while(length <= 0 || width <= 0);
  area = length*width;
  cout << "The area of the rectangle is " << area << "." << endl;
}

void areaOfTheTriangle(){
  int base, height;
  double area;
  do {
    cout << "Please enter the base: ";
    cin >> base;
    cout << "Please enter the height: ";
    cin >> height;
    if (base <= 0 || height <=0)
    cout << "Invalid input. The values of base and height must be greater than 0. \n";
  } while(base <= 0 || height <=0);
  area = base*height*.5;
  cout << "The area of the triangle is " << area << "." << endl;
}
