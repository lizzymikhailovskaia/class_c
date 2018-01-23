#include <iostream>
using namespace std;

int main()
{       const int LOWSCORE = 3;
        int score1, score2;
        string nameteam1, nameteam2;
        char doAgain = 'y';

        do
        {       cout << "What's the name 1 team: ";
                cin >> nameteam1;
                cout << "Enter " << nameteam1 << " score: ";
                cin >> score1;
                cout << "What's the name 2 team: ";
                cin >> nameteam2;
                cout << "Enter " << nameteam2 << " score: ";
                cin >> score2;

                cout << nameteam1 << " " << score1 << endl;
                cout << nameteam2 << " " << score2 << endl;

                if(score1 > score2)
                {
                        cout << "Winner: " << nameteam1 << endl;
                }else if(score1 < score2)
                {
                        cout << "Winner: " << nameteam2 << endl;
                }else
                {
                        cout << "It's a tie game" << endl;
                }
                

                cout << "Would you like to do it again?(enter y for yes and n for no)\n";
                cin >> doAgain;
        } while (doAgain == 'y' || doAgain == 'Y');

        return 0;
}
