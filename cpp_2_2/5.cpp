/*-ask user for 2 file names
-open the 2 files
-display the content of the 2 files in a table
-optional: create the two files from your own program.
 */

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
