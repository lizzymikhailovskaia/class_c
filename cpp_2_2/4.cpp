// Lizzy Mikhailovskaia

/*Write a program which tracks assignment grades.
It should do the following:•instead of asking the user how many assignments there are.
no. of assignment will be detected based on number of valid grades within an data
file - “grades.txt”.•instead of inputing a grade for each assignment from the user.
grades are listed in the data file @ each subsequent lines (one grade per line).
Make sure each grade is at least 0 and at most 100.
If the grade is outside the range, make sure it is tossed out from the calculation and treated it as invalid grade.
•Print out the total points scored, and the average (mean) score.•If you have time: print out the letter grade
for the average score using the standard grading formula (90 or higher is an A, 80 or higher is a B, etc.) */

#include <iostream>
#include <fstream>  // INCLUDE THE FILE NEEDED TO USE FILES.

using namespace std;

int main()
{
        int numAssignments, grade, total = 0;

        ifstream inputFile;
        inputFile.open("grades.txt"); //open the file.
        for (int i = 0; i < numAssignments; i++) {
            if (grade < 0 || grade > 100) {
                cout << "Re-enter grade(grade must be between 0-100): ";
            inputFile >> grade;
            total += grade;
            }
        }

        // Print total score from user input
        cout << "Total Score: " << total;

        cout << endl;

        // Calculate average grade of total assigments
        double average = total / numAssignments;

        // Print average score from user input
        cout << "Average Score: " << average << endl;

        // Print letter grade based on average score
        if (average >= 90)
        {
                cout << "Your grade is A";
        } else if (average >=80)
        {
                cout << "Your grade is B";
        } else if (average >= 70)
        {
                cout << "Your grade is C";
        } else if (average >= 60)
                cout << "Your grade is D";
        else{
                cout << "I'll see you again next semester!";
        }

        cout << endl;
        return 0;
}
