
/*
    Lizzy Mikhailovskaia
    CS 110B
    Assignment 8_1
    Rewrite your most recent high scores program so that each name/score pair
    is stored in a struct named highscore. Except as noted below,
    this new program will continue to meet all of the requirements of your most recent
    high scores program. Your new program should meet the following requirements:
    This program receives scores and the names of people they belong to and
    then sorts them in descending order by score amount. It uses two arrays, an
    int array, scores, and a string array, names.  The program will prompt the user to enter a name and then
    prompts them to enter a score until both arrays are full. The name and score
    pairs are maintained by keeping the name and its score in the same index number
    for both arrays. Then, the program sorts them in descending order by score and
    keeps the original name and score pairs together. Finally, it prints the sorted
    scores in two columns, one the names and the other the scores. Each row contains
    a pair of names and scores entered together by the user.
*/

#include <iostream>
using namespace std;

struct highscore {
  int score;
  char name[24];
};


void initializeData(highscore scores[], int size);
void sortData(highscore scores[], int size);
void displayData(const highscore scores[], int size);

int main()
{
   int size;

   cout << "How many scores will you enter?: ";
   cin >> size;
   highscore scores[size];
   initializeData(scores, size);
   sortData(scores, size);
   displayData(scores, size);

}






/*
   This function prompts the user for names and scores size times, until the two
   arrays are initialized. The name and score pairs are stored in the same index
   number for each array.
*/

void initializeData(highscore scores[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << "Enter the name for score #" << (index + 1) << ": ";
        cin >> scores[index].name;
        cout << "Enter the score for score #" << (index + 1) << ": ";
        cin >> scores[index].score;
    }
    cout << endl;
}






/*
   This function receives an int array, scores, and a string array. It
   sorts the values in descending order by scores and keeps the name pairs in the
   same order as their corresponding score. It receives an array,
   list, and an int, the index to begin looking at. It uses a for loop to iterate
   through the array to find the index with the largest inteter. If the pre
   condition is not met, the function will return startingIndex.
   */

void sortData (highscore scores[], int size)
{
	bool swap;
	highscore temp;
	do
	{
		swap = false;
		for (int count = 1; count < size; count++)
		{
			if (scores[count].score > scores[count - 1].score)
			{
				temp = scores[count];
				scores[count] = scores[count - 1];
				scores[count - 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}







/*
   This function prints two arrays. It receives the string array, names and the
   int array, scores. First, it prints out "Top Scorers:" and then on a new line,
   prints the contents of the arrays in two columns. The names are printed
   on the left and the scores are printed on the right. They are separated by a :

*/

void displayData(const highscore scores[], int size)
{
    cout << "Top Scorers: " << endl;
    for(int index = 0; index < size; index++)
    {
        cout << scores[index].name<< ": " << scores[index].score << endl;
    }
}

/*
izzy@Lizzys-MacBook-Pro  ~/class_c/class2   master ●  g++ -o output a8_1.cpp   && ./output
How many scores will you enter?: 3
Enter the name for score #1: Rosa
Enter the score for score #1: 120
Enter the name for score #2: Ivan
Enter the score for score #2: 130
Enter the name for score #3: Jore
Enter the score for score #3: 70

Top Scorers:
Ivan: 130
Rosa: 120
Jore: 70
*/
