 // This program reads data from a file into an array.
 #include <iostream>
 #include <fstream>
 using namespace std;

 int main() {
   const int ARRAY_SIZE = 10;
   int numbers[ARRAY_SIZE];
   int count;
   ifstream inputFile;

   inputFile.open("TenNumbers.txt"); //open the file.
   // read the 10 numbers from the file into the array
   for (count = 0; count < ARRAY_SIZE; count++)
     inputFile >> numbers[count];
   // cclose the file
   inputFile.close();

   //display the numbers read:
   cout << "The numbers are: ";
   for (count = 0; count < ARRAY_SIZE; count++)
     cout << numbers[cout] << " ";
     cout << endl;
    return 0;
 }
