/*A retail company must file a monthly sales tax report listing the sales for the month
and the amount of sales tax collected. Write a program that asks for the month,
the year, and the toal amount collected at the cash register (that is, sales plus sales tax).
Assume the state sales tax is 4 percent and the county sales tax is 2 percent. */

//Elizaveta Mikhailovskaia
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
const double STATE_TAX_RATE = 0.04, COUNTY_TAX_RATE = 0.02;
string month;
double year,totalCollected,sales,stateTaxTotal,countyTaxTotal,totalTax;

cout << "Please enter month: "<<endl;
cin >> month;

cout << "Please enter year: "<<endl;
cin >> year;

cout << "Please enter total amount collected: "<<endl;
cin >> totalCollected;

sales = totalCollected / 1.06;

stateTaxTotal = sales * STATE_TAX_RATE;
countyTaxTotal = sales * COUNTY_TAX_RATE;
totalTax = stateTaxTotal + countyTaxTotal;

cout << endl;
cout << "Month: " << month << endl;
cout << "Year: " << year << endl;
cout << "----------------------------------\n";
cout << setprecision(2) << fixed;
cout << "Total Collected:" << setw(10) << "$" << setw(9) << totalCollected << endl;
cout << "Sales:" << setw(20) << "$" << setw(9) << sales << endl;
cout << "County Sales Tax:" << setw(9) << "$" << setw(9) << countyTaxTotal << endl;
cout << "State Sales Tax:" << setw(10) << "$" << setw(9) << stateTaxTotal << endl;
cout << "Total Sales Tax:" << setw(10) << "$" << setw(9) << totalTax << endl;

  return 0;
}
