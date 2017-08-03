// Lab 6 kiloConverter.cpp
// This menu-driven program lets the user convert
// pounds to kilograms and kilograms to pounds.
// Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

void displayMenu();
int getChoice(int min, int max);
double kilosToPounds();
double poundsToKilos();

double POUD_COEFF =  0.45359237;
int choice;

int main() {
  displayMenu();
  return 0;
}

void displayMenu() {
  do {
    cout << "############"<< endl;
    cout << "1. Convert kilograms to pounds" << endl;
    cout << "2. Convert pounds to kilograms " << endl;
    cout << "3. Quit" << endl;
    choice = getChoice(1, 3);
    if (choice == 3) {
      cout << "Program quitting now. \n";
      break;
    }
    if (choice == 1) {
      double res = kilosToPounds();
      cout << " kilograms = " << res << " pounds. " << endl;
    }
    if (choice == 2) {
      double res = poundsToKilos();
      cout << "pounds  = " << res << " kilograms. " << endl;
    }
  } while (choice != 3);
}

int getChoice(int min, int max) {
  int input;
  cin >> input;
  while (input < min || input > max) {
    cout << "Invalid input. Enter an integer between 1 and 3: ";
    cin  >> input;
  }
  return input;
}

double kilosToPounds() {
  double weight;
  cout << "Weight to be converted: " << endl;
  cin >> weight;
  cout << weight;
  return weight / POUD_COEFF;
}

double poundsToKilos() {
  double weight;
  cout << "Weight to be converted: " << endl;
  cin >> weight;
  cout << weight;
  return weight * POUD_COEFF;
}
