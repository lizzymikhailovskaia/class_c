// This program has three functions: main, first, and second.
#include <iostream>
using namespace std;

//Definition of function first
// This function displays message.

void first() {
  cout << "I am now inside the function first." << endl;
}

//Definition of function second
// This function displays a message

void second() {
  cout << "I am now inside the function second" << endl;
}

//Function main

int main(){
  cout << "I am starting in function main."<< endl;
  first(); //call function first
  second();  // call function second
  cout << "Back in function main again"<<endl;
  return 0;
}
