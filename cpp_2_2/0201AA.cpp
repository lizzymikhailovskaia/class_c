//Lizzy Mikhailovskaia
// CS110B
// CH 3 - Programming Exercise A
// This program converts temperature between Celsius and Fahrenheit
/*To convert between Celsius and Fahrenheit, the following formula is used,
 where C=Celsius temperature and F=Fahrenheit temperature: C = 5/9 * (F-32)
 
 Write a function called float toCelsius(float) which takes a fahrenheit 
 temperature as a parameter, and returns the equivalent celsius temperature
 Demonstrate that your function works by printing out a table of fahrenheit
values 60, 61, 62, ... through 80 along with the corresponding celsius temperatures
•You can add this line in your function to make floating point output fixed, with #include<iomanip> 
 cout.setf(ios::fixed, ios::floatfield);•You can then call setprecision(2) in your cout statements 
 to print out two decimal places, e.g.  */


#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
float toCelsius(float);

// Main function
int main()
{
  float fTemp = 60.0;
  for (int i = 0; i <= 20; i++)
  {
    float celsius;
    celsius = toCelsius (fTemp);
    cout << "Degree(C): " << setprecision(2) << celsius;
    fTemp++;
    cout << endl;
  }

  return 0;
}

// Function header

// toCelsius() converts temperature from Fahrenheit to Celsius
float toCelsius (float fTemp){
  float cTemp;
  cTemp = (5.0/9.0 * (fTemp-32));
  return cTemp;
}