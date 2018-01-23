// /* Elizaveta Mikhailovskaia
// A program for cashier/user ask for quantity of any item and price
// Display each item's price, the subtotal of the sale, the amount of sales tax, and the total. */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string mystr;
  const double SALESTAXRATE = 0.06;
  double totalSubtotal = 0;
  float price=0;
  int quantity=0;
  double subtotal= 0;
  double salesTax=0;
  double total=0;
  double totalQuantity=0;

  do {
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    if (quantity == 0) break;

    cout << "Please enter your item1 price $: "<< endl;
    getline (cin,mystr);
    stringstream(mystr) >> price;

    subtotal = price*quantity;
    salesTax = subtotal*SALESTAXRATE;
    total = subtotal + salesTax;
    totalSubtotal += subtotal;
    totalQuantity += quantity;


    cout << "--" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax is $" << salesTax<< "." << endl;
    cout << "Total is $" << total << "." << endl;
  } while (true);

  salesTax = totalSubtotal*SALESTAXRATE;
  total = totalSubtotal + salesTax;


  cout << "-------------------------" << endl;
  cout << "All Subtotal: $" << totalSubtotal << endl;
  cout << "All Sales Tax is $" << salesTax<< "." << endl;
  cout << "Your All Total is $" << total << "." << endl;
  cout << "All your quantity is: " << totalQuantity << "." <<endl;

  return 0;
}
