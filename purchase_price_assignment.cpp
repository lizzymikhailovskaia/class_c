/* Elizaveta Mikhailovskaia
A program that holds the prices of the five items in five variables. Display each
item's price, the subtotal of the sale, the amount of sales tax, and the total. Assume the
sales tax is 6%. */

#include <iostream>             // Needed to do C++ I/O
#include <string>              // Needed by some compilers to use strings
using namespace std;

int main()
{
  //Define variables

  double item1, item2, item3, item4, item5, subtotal, salesTax, total;
  const double SALESTAXRATE = 0.6;

  //Specify cosB
  item1 = 12.95;
  item2 = 24.95;
  item3 = 6.95;
  item4 = 14.95;
  item5 = 3.95;

  //Calculation
  subtotal = item1 + item2 + item3 + item4 + item5;
  salesTax = subtotal * SALESTAXRATE;
  total = subtotal + salesTax;

  //Print the output
  cout << "Item_1 is cost $" << item1 << "." << endl;
  cout << "Item_2 is cost $" << item2 << "." << endl;
  cout << "Item_3 is cost $" << item3 << "." << endl;
  cout << "Item_4 is cost $" << item4 << "." << endl;
  cout << "Item_5 is cost $" << item5 << "." << endl;
  cout << "Subtotal is $" << subtotal << "." << endl;
  cout << "Sales Tax is $" << salesTax << "." << endl;
  cout << "Total is $" << total << "." << endl;

  return 0;
}
