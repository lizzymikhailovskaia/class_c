//Create a program that determines how many brownies will fit in a baking pan of a specified size.
// Design and implement the brownies.cpp program so that it correctly does the following:
//Prompt the user to enter the length and width (in inches) of a baking pan.
//Compute the   area of the bottom of the pan.
//Compute how many small brownies the pan will hold if each one is cut with a 1”x1” square bottom.
//Compute how many big brownies the pan will hold if each one is cut with a 2”x2” square bottom.
//Display, with appropriate labels, the pan dimensions, the number of small brownies,
//and the number of large brownies the pan can hold. The output might look something like this:
//A 12 X 9 inch pan can hold 108 small brownies or 27 large brownies.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  double length, width, areaPan, smallBrownies, bigBrownies, areaSmallBrownies, areaBigBrownies ;
  string mystr;

  //Prompt the user for the crate's length, width
  cout << "Enter the dimensions of the  area of the bottom of the pan. (in inches):\n";
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;

  //Calculation
  areaSmallBrownies = 1 * 1;
  areaBigBrownies = 2 * 2;

  //Compute and assign
  //determine how many small brownies pan can hold
  areaPan = length * width;
  smallBrownies = areaPan / areaSmallBrownies;
  bigBrownies = areaPan / areaBigBrownies;

  cout << "A " << length << " X " << width << " inch pan can hold " << smallBrownies
   << " small brownies " << "or " << bigBrownies << " large brownies." << endl;

  return 0;
}
