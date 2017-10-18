
/*
    Lizzy Mikhailovskaia
    CS 110B
    Assignment 6.2

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

void initializeArrays(string names [], int scores[], int size);
void sortData(string names[], int scores[], int size);
int indexOfLargest(const int list[], int startingIndex, int size);
void displayData(const string names[], const int scores[], int size);

int main()
{
   int size;
   int *scores;
   string* names;
   cout << "How many scores will you enter?: ";
   cin >> size;
   scores = new int[size];
   names = new string[size];
   initializeArrays(names, scores, size);
   sortData(names, scores, size);
   displayData(names, scores, size);
}




/*
   This function prompts the user for names and scores size times, until the two
   arrays are initialized. The name and score pairs are stored in the same index
   number for each array.

   pre: size <= the size of the arrays
   post: scores[] and names[] are initialized
*/

void initializeArrays(string names[], int scores[], int size)
{
    for(int index = 0; index < size; index++)
    {
        cout << "Enter the name for score #" << (index + 1) << ": ";
        cin >> names[index];
        cout << "Enter the score for score #" << (index + 1) << ": ";
        cin >> scores[index];
    }
    cout << endl;
}





/*
   This function receives an int array, scores, and a string array. It
   sorts the values in descending order by scores and keeps the name pairs in the
   same order as their corresponding score.

   pre: size <= the size of the arrays
   post: Both arrays are sorted in descending order by scores.
*/

void sortData(string names[], int scores[], int size) {
    int largestIndex;
    for (int count = 0; count < size - 1; count++){
        largestIndex = indexOfLargest(scores, count, size);
        swap(names[largestIndex], names[count]);
        swap(scores[largestIndex], scores[count]);
    }

}




/*
   This function finds the index with the largest integer. It receives an array,
   list, and an int, the index to begin looking at. It uses a for loop to iterate
   through the array to find the index with the largest inteter. If the pre
   condition is not met, the function will return startingIndex.

   pre: 0 <= startingIndex < size, size <= the size of the arrays
   post: returns the number of the index with the largest integer.
*/

int indexOfLargest(const int list[], int startingIndex, int size){
    int targetIndex = startingIndex;

    for (int count = startingIndex + 1; count < size; count++){
        if (list[count] > list[targetIndex]){
            targetIndex = count;
        }
    }

    return targetIndex;
}



/*
   This function prints two arrays. It receives the string array, names and the
   int array, scores. First, it prints out "Top Scorers:" and then on a new line,
   prints the contents of the arrays in two columns. The names are printed
   on the left and the scores are printed on the right. They are separated by a :

   pre: size <= the size of the arrays
   post: prints the two arrays in two columns
*/

void displayData(const string names [], const int scores [], int size)
{
    cout << "Top Scorers: " << endl;
    for(int index = 0; index < size; index++)
    {
        cout << names[index] << ": " << scores[index] << endl;
    }
}
