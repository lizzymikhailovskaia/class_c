//lizzy Mikhailovskaia

//Write a program which tracks assignment grades. It should do the following:
// Ask the user how many assignment there are
// Input a grade for each  assignment from the user. Make sure each grade is at least 0 and at most 100.
// Print out the total paints scored, and the average ( mean) score.
// If you have time: print out the letter grades for the average score using the standard grading formula
//(90 or higher is an A, 80 or higher is a B etc)

#include <iostream>
using namespace std;

int main()
{
        // declare variables
        int numAssignments, grade, total = 0;

        // ask user for number of assignments
        cout << "Enter the number of assignments: ";
        cin >> numAssignments;

        // ask user for the grade of each assignment
        for (int i = 0; i < numAssignments; i++)
        {
                cout << "Enter grade for assigment" << " " << i + 1 << ": ";
                cin >> grade;

                // grade input validation
                if (grade < 0 || grade > 100) {
                        cout << "Re-enter grade(grade must be between 0-100): ";
                        cin >> grade;
                }
                total += grade;
        }
        // Print total score from user input
        cout << "Total Score: " << total;

        cout << endl;

        double average;

        // Calculate average grade of total assigments
        average = total / numAssignments;

        // Print average score from user input
        cout << "Average Score: "<< average << endl;

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
/*
Enter the number of assignments:  7
Enter grade for assigment 1:  900
Re-enter grade(grade must be between 0-100):  87
Enter grade for assigment 2:  99
Enter grade for assigment 3:  87
Enter grade for assigment 4:  99
Enter grade for assigment 5:  30
Enter grade for assigment 6:  100
Enter grade for assigment 7:  100
Total Score: 602
Average Score: 86
Your grade is B
*/
