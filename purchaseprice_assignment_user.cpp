/* Elizaveta Mikhailovskaia
A program ask user for price of 5 item and holds the prices of the five items
in five variables.Display each item's price, the subtotal of the sale, the amount of sales tax, and the total. */

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
  cout << "Please enter your item1 price $: "<< endl;
  cin >> item1;
  cout << "Please enter your item2 price $: "<< endl;
  cin >> item2;
  cout << "Please enter your item3 price $: "<< endl;
  cin >> item3;
  cout << "Please enter your item4 price $: "<< endl;
  cin >> item4;
  cout << "Please enter your item5 price $: "<< endl;
  cin >> item5;


  cout << "Subtotal is $" << subtotal << "." << endl;
  cout << "Sales Tax is $" << salesTax << "." << endl;
  cout << "Total is $" << total << "." << endl;

  return 0;

}
