/*THis is for driver license program.
The Local Driver's License Office has asked you to write a program that grades
the written portion of the driver's license exam. The exam has 20 multiple choice questions.
Here are the correct answers:
correctAnswers = [B, D, A, A, C, A, B, A, C, D, B, C, D, A, D, C, C, B, D, A]
1. B,  2. D,  3. A, 4. A,  5. C,  6. A,  7. B,  8.A, 9. C,  10. D, 11. B, 12. C, 13. D, 14. A, 15. D,
 16. C, 17. C, 18. B, 19. D, 20. A
Your program should store the correct answers shown above in an array.
It should ask the user to enter the student's answers for each of the 20 questions,
which should be stored in another array.
After the student's answers have been entered, the program should display a message indicating
whether the student passed or failed the exam.
(a student must answer 15 of the 20 questions to pass the exam.
It should then display the total number of correctly answered questions,
the total number of incorrectly answered questions and
a list showing the question numbers of the incorrectly  answered questions.
INPUT VALIDATION: Only accept the letters A, B, C, or D as answers.
 */
// Lizzy Mikhailovskaia

#include <iostream>
using namespace std;

char correctAnswers [20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
char studentAnswers [20];
int markedAnswers [20];
double numCorrect = 0;
int main() {

    for(int i = 0; i < 20; i++)
    {
        cout << " Enter answer for # "<< i + 1 << endl;
        do {
        cin >> studentAnswers[i];
        if (studentAnswers[i] >= 'a' && studentAnswers[i] <= 'd')
          studentAnswers[i] = studentAnswers[i] + ('A' - 'a');
        if (!(studentAnswers[i] >= 'A' && studentAnswers[i] <= 'D'))
        cout << "Invalid enter. Please enter A - D."<< endl;
      } while (!(studentAnswers[i] >= 'A' && studentAnswers[i] <= 'D'));
    }

    for (int i = 0; i < 20; i++)
        {
            if (studentAnswers[i]==correctAnswers[i] )
            {
                numCorrect ++;
            }
        }
    if (numCorrect >= 15)
      cout << "You  passed!" << endl;
    else
      cout << "You failed"<< endl;
    cout << "You got "<<numCorrect << "/20  correct" <<endl;
    cout << "You got "<<(20 - numCorrect) << "/20  incorrect" <<endl;
    for (int i = 0; i < 20; i++)
        {
            if (studentAnswers[i]!=correctAnswers[i] )
            {
                cout << " For answer # "<< i + 1 <<" You chose " << studentAnswers[i] << " correct answer is " << correctAnswers[i] << endl;
            }
        }
    return 0;
}
