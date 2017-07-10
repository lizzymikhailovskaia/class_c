// Lab 3 percentage.cpp
// This program will determine the percentage
// of answers a student got correct on a test.
// Elizaveta Mikhailovskaia

#include <iostream>  // I/O
#include <fstream>   // file I/O
#include <iomanip>   // format manipulation
#include <string>
using namespace std;

 int main()
 {
    string name;
    int numQuestions,
        numCorrect;
    double percentage;
    string firstName, lastName;

    // Get student's test data
    cout << "Enter student's first and last name: ";
    // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.
    cin  >> firstName >>lastName;

    cout << "Number of questions on the test: ";
    cin  >> numQuestions;
    cout << "Number of answers the student got correct: ";
    cin  >> numCorrect;
    if (numQuestions < numCorrect) {
      cout << "Number of questions on the test is less than number of answers, please put the correct number.";
      return -1;
    }
    // Compute and display the student's % correct
    // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.
    percentage = static_cast<double> (numCorrect) *100/numQuestions;

    // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST
    // PERCENTAGE WITH ONE DECIMAL POINT.
    cout << firstName <<" " << lastName <<setw(3)<< "  "<<percentage<< " % " << endl;

    return 0;
 }
