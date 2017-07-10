// Lab 3 icecream.cpp
// Design and implement the icecream.cpp program.
/*Write a program that prompts the user to enter the number of each cone type sold that day,
 and then computes and displays a daily sales report that includes
 the following nicely formatted and labeled information. Number of cones sold of each type */

// Elizaveta Mikhailovskaia.
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
 {
    // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
    const double DELIGHTFUL = 1.49, // 1 scoop
                 DOUBLEDELIGHT = 2.49, // 2 scoop
                 TRIPLEDELIGHT = 3.49; // 3 scoop

    // Sizes of ice cream cones. Give each one a descriptive.
    // Name and an appropriate data type.
    // Declare all needed variables here. Give each one a descriptive.
    // Name and an appropriate data type.
    int numberSingleCones, numberDoubleCones,numberTripleCones,totalNumberCones;
    double totalSalesDelightful,totalSalesDoubleCones, totalSalesTripleCones,totalSoldAllCones;

    // Write statements here to prompt for and input the information
    cout << "Number of single scoop cones sold: ";
    cin >> numberSingleCones;
    cout << "Number of double scoop cones sold: ";
    cin >> numberDoubleCones;
    cout << "Number of triple scoop cones sold: ";
    cin >> numberTripleCones;
    cout << endl;

    // Write statements here to perform all needed computations
    // And  assign the results to variables.
    cout << setprecision(2) << fixed;
    totalSalesDelightful = DELIGHTFUL * numberSingleCones;
    totalSalesDoubleCones = DOUBLEDELIGHT * numberDoubleCones;
    totalSalesTripleCones = TRIPLEDELIGHT * numberTripleCones;

    cout << "DeLIGHTful cones" << right << setw(10) << numberSingleCones << setw(5) << "$" << right
     << setw(7) << totalSalesDelightful << endl;
    cout << "Double DeLIGHT cones" << right << setw(6) << numberDoubleCones<< setw(5) << "$" << right
    << setw(5) << totalSalesDoubleCones << endl;
    cout << "Triple DeLIGHT cones" << right << setw(6) << numberTripleCones << setw(5) << "$" << right
     << setw(7) << totalSalesTripleCones << endl;

    totalNumberCones = numberSingleCones + numberDoubleCones + numberTripleCones;
    totalSoldAllCones = totalSalesDelightful + totalSalesDoubleCones + totalSalesTripleCones;

    // Write statements here to display the requested information.
    cout << "Total" << right << setw(21) << totalNumberCones << setw(5) << "$" << right << setw(5)
    << totalSoldAllCones << endl;
    cout << endl;
      return 0;
}
