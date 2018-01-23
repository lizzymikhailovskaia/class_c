//Write a program that asks the user to enter a date in the format specified above
// (month/day/2-digit-year). The program should then determine whether
//the month times the day is equal to the year. If so, it should display a message saying
//the date is magic. Otherwise it should display a message saying the date is not magic.

//Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

int main(){
int month;
int day;
int year;
int magic;

  cout << "Please enter a date in the format specified above month/day/2-digit-year "<< endl;
  cin >> month >> day >> year;
  magic = (month * day);

  if (magic == year)
  {
  cout << "The date is magic"<<endl;;
  }
  else
  cout << "The date is not magic" << endl;
}
