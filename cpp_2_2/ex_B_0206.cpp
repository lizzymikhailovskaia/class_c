/*
•The local taqueria now wants some help with their ordering system.
They would like you to create a program to help them enter an order
for display in the kitchen.  There are the same four types of burritos
from exercise A: carnitas, beef, shrimp, and vegetarian.

•Your main() should prompt the user for the number of burritos in the order,
and then enter all the burrito types for the order.  The burrito types should
be stored in an array of strings.  You'll also need to store the number of burritos in the order.
You can assume that no order will have more than 10 burritos.

•The shrimp burrito must be cooked to order and thus takes longer to prepare
 than the other kinds.  Because of this, an alert is needed ASAP if there is a shrimp burrito in the order.
Write a function which takes two parameters: your array of burrito strings, and the number of burritos in the array.
It should determine if there are any shrimp burritos in the array and print out an alert if so.
You must write a function for this alert, this can't be in main().
*/
//Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

// Function Prototype
void alertShrimp (string [], int);


// Main Function
int main() {
  int numBurritos;

    cout << "How many burritos are in the order? ";
    cin >> numBurritos;
    string burritoNames[numBurritos]; // creating burritoNames array

  for (int i = 0; i < numBurritos; i++) {
    cout << "What is burrito " << i+1 << ": ";
    cin >> burritoNames[i];
  }

  alertShrimp (burritoNames, numBurritos);
}

// Function Definition
void alertShrimp (string burritoNames[], int numBurritos) {
  for (int i = 0; i < numBurritos; i++) {
    if (burritoNames[i] == "shrimp")
      cout << "There is a shrimp in order!" << endl;
  }
}
