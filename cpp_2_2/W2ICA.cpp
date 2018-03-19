//Lizzy Mikhailovskaia
//week 2 in-class exercise A

/* Write a program for a baseball game which does the following:
Ask the user for the score for the home team, then ask the user for the score for the away team.
Display the home team and away team scores, and tell the user who won the game.
At the end of the program, ask the user if they would like to go again.
If the user enters 'y' then run the program again, otherwise it's done.
Let the user run it as many times as desired.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
        const int LOW_SCORE = 3;
        string teamName1, teamName2;
        int score1, score2;
        char doAgain = 'y';

        do {
            // ask user to enter 1, 2  baseball team name:
            cout << "Please enter a baseball team name #1: " << endl;
            getline(cin, teamName1);
            cout << "Please enter a baseball team name #2: " << endl;
            getline(cin, teamName2);
            cout << " " << endl;


            // ask user to enter 1,2 baseball team score
            cout << "Enter score for team: " << teamName1 << endl;
            cin >> score1;
            cout << "Enter score for team: " << teamName2 << endl;
            cin >> score2;
            cout << " " << endl;


            // display scores for each team
            cout << teamName1 << " has a score of: " << score1 << endl;
            cout << teamName2 << " has a score of: " << score2 << endl;
            cout << " " << endl;


            // declare a winner
            if (score1 > score2) {
                cout << " " << endl;
                cout << "The winning team is " << teamName1 << ". Hooray!" << endl;
            }
            else if(score1 < score2) {
                cout << "The winning team is " << teamName2 << ". Hooray!" <<  endl;
            }
            else {
                cout << "It is a tie!" << endl;
            }

            // If score low
            if (score1 < LOW_SCORE)
                cout << teamName1 << " has a low score < " << LOW_SCORE << endl;
            if (score2 < LOW_SCORE)
                cout << teamName2 << " has a low score  < " << LOW_SCORE << endl;

            cout << " " << endl;
            cout << "Would you like to do it again? (enter y for yes and n for no)\n";
                   cin >> doAgain;

           } while (doAgain == 'y' || doAgain == 'Y');

        return 0;
}

/*
lizzy@Lizzys-MacBook-Pro  ~/class_c/cpp_2_2   master ●  g++ -o output 2.cpp   && ./output

Please enter a baseball team name #1:
Boston Red Sox
Please enter a baseball team name #2:
Pittsburgh Pirates

Enter score for team: Boston Red Sox
2
Enter score for team: Pittsburgh Pirates
3

Boston Red Sox has a score of: 2
Pittsburgh Pirates has a score of: 3

The winning team is Pittsburgh Pirates. Hooray!
Boston Red Sox has a low score < 3

Would you like to do it again? (enter y for yes and n for no)
y
Please enter a baseball team name #1:
Houston Astros
Please enter a baseball team name #2:
New York Yankees

Enter score for team: Houston Astros
3
Enter score for team: New York Yankees
3

Houston Astros has a score of: 3
New York Yankees has a score of: 3

It is a tie!
Would you like to do it again? (enter y for yes and n for no)
n
*/
