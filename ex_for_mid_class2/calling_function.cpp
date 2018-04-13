//This program has two function: main and displayMessage

#include <iostream>
using namespace std;

// Definition of function displayMessa
// This function display a greeting

void displayMessage() {
  cout << "Hello from the function displayMessage." << endl;
}
 // Function int main(int argc, char const *argv[]) {

int main(){
  cout << "Hello from main." << endl;
  displayMessage();
  cout << "Back in function main again." <<endl;
  return 0;
}
