// Lizzy (Elizaveta) Mikhailovskaia, CS 110B-Programming Fundamentals: C++-831 and 832
// Date: 09-20-2017,    Instructor: Harden David

/* Write a program that records high-score data for a fictitious game.
The program will ask the user to enter five names, and five scores.
It will store the data in memory, and print it back out sorted by score. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initializeArrays(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);
int indexOfBiggest(int array[], int size, int start);

int main() {
    string names[5];
    int scores[5];
    int size = 5;

    initializeArrays(names, scores, size);
    sortData(names, scores, size);
    displayData(names, scores, size);

    return 0;
}






//The data must be stored in two arrays: an array of strings named names, and an array of ints named scores
void initializeArrays(string names[], int scores[], int size) {
    for (int count = 0; count < size; count++) {
        cout << "Enter the name for score #" << count + 1 << ": ";
        cin >> names[count];
        cout << "Enter the score for score #" << count + 1 << ": ";
        cin >> scores[count];
    }
}






// This function to sort both arrays in descending order by score
void sortData(string names[], int scores[], int size) {
    int maxIndex;
    for (int count = 0; count < size - 1; count++){
        maxIndex = indexOfBiggest(scores, size, count);
        swap(scores[maxIndex], scores[count]);
        swap(names[maxIndex], names[count]);
    }
}






int indexOfBiggest(int array[], int size, int start) {
    int maxIndex = start;
    for (int count = start + 1; count < size; count++) {
        if (array[count] > array[maxIndex]){
            maxIndex = count;
        }
    }
    return maxIndex;
}






// This function to display the final list of names and scores.
void displayData(const string names[], const int scores[], int size) {
    cout << "Top Scorers:" << endl;
    for (int count = 0; count < size; count++) {
        cout << names[count] << ": " << scores[count] << endl;
    }
}


// output:
/*
✘ lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master ●  g++ -o output a5_1.cpp   && ./output
Enter the name for score #1: Suzy
Enter the score for score #1: 600
Enter the name for score #2: Kim
Enter the score for score #2: 9900
Enter the name for score #3: Bob
Enter the score for score #3: 1012
Enter the name for score #4: Armando
Enter the score for score #4: 8000
Enter the name for score #5: Tim
Enter the score for score #5: 514

Top Scorers:
Kim: 9900
Armando: 8000
Bob: 1012
Suzy: 600
Tim: 514
*/
