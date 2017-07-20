// This fortune telling program will be modified to use a void function
// Lizzy Mikhailovskaia

#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// wtite a prototype for the tellFortune function here.
void  tellFortune(int numYears, int numChildren);

int numYears,  numChildren;

int main()
{
  cout << "This program can tell your future. \n" 
       << "Enter two integers separated by a space: "; 
  cin >> numYears >> numChildren;

  // do {
      void  tellFortune(int numYears, int numChildren);
  //  } while(true);

   return 0;
 }
  /*****     tellFortune     *****/ 
// WRITE THE tellFortune FUNCTION HEADER HERE.
// WRITE THE BODY OF THE tellFortune FUNCTION HERE.
void  tellFortune(int numYears, int numChildren){
  numYears = abs(numYears)%5; //Convert to a positive integer 0 to 4
  numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5 

  cout << "\nYou will be married in " << numYears << " years " 
      << "and will have " << numChildren << " children.\n";  
}
