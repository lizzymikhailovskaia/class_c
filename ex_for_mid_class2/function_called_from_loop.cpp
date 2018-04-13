// The function displayMessage is repeatedly called from a loop
#include <iostream>
using namespace std;

//definition of function displayMessage
//This function displays a greeting

void displayMessage() {
  cout << "Hello from the function displayMessage." << endl;
}

//Function main
int main(){
  cout << "Hello from main." << endl;
  for (int count = 0; count < 5; count++)
    displayMessage(); //call displayMessage
cout << "Back in function main again." << endl;
return 0;
}
