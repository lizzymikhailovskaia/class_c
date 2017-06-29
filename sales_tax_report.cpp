//Elizaveta Mikhailovskaia
//This is for Chapter 3
//A retail company must file a monthly sales tax report listing the sales for the month
//and the amount of sales tax collected. Write a program that asks for the month, the year,
// and the toal amount collected at the cash register (that is, sales plus sales tax).
// Assume the state sales tax is 4 percent and the county sales tax is 2 percent.

//If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated  as:
//S= T/1.06
//S is the product sales and T is the total income (product sales plus sales tax)
//The program shold display a report similar to

//Month: October
//----------------------------------------------------
//Total Collected:    $  26572.89
//Sales:              S  25068.76
//County Sales:        $   501.38
//State Sales Tax:     $  1002.75
//Total Sales Tax:      $  1504.13

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string mystr;
  string month;
  double total_collected = 0;
  double sales = 0;
  double county_sales = 0;
  double state_sales = 0;
  double total_sales = 0;
  const double COUNTYSALESTAX = 0.02;
  const double STATESALESTAX = 0.04;
  const double TOTALSALESTAX = 0.06;



  do {
    cout << "Enter the month: ";
    getline (cin,mystr);
    stringstream(mystr) >> month;
    // if (month == "0") break;

    cout << "Please enter your total collected $: "<< endl;
    getline (cin,mystr);
    stringstream(mystr) >> total_collected;

    sales = total_collected/1.06;
    county_sales = sales*COUNTYSALESTAX;
    state_sales= sales*STATESALESTAX;
    total_sales = county_sales + state_sales;

    cout << "Month: " << month << endl;

    cout << "------------------------------" << endl;

    cout << "Total Collected: $" << total_collected << endl;
    cout << "Sales $" << sales  << endl;
    cout << "County Sales $" << county_sales  << endl;
    cout << "State Sales Tax $" << state_sales  << endl;
    cout << "Total Sales Tax $" << total_sales << endl;


  } while (true);

  return 0;
}
