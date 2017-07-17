// Lab 4 testNum.cpp  2 // This program checks to see if a test score is equal to 100.  
// It currently contains a logic error.  
// Elizaveta Mikhailovskaia
#include <iostream> 
using namespace std; 

int main() 
{ 
  int score = 65;  // Initialize student's test score 11     
    if (score == 100) ;
    cout << "You made a perfect score.\n"; 
    else
    cout << "You needed " << score << " more points for a perfect score.\n"; 
  return 0; 
 } 

/* Step 2:
 What do you think the program will print when it is run?
1. use '==' to turn this assignment into an equality comparison
2. It will read only first if statment input will be: You made a perfect score.
Compile and run the program.  Did it produce the output you expected?  Yes
Find the logic error in the program and fix it so that the program produces the correct output.
Write down the correct output it now displays.______
*/
/*Step 3:  Replace the two if statement in the program with a single if/else statement. Then recompile and rerun it.
You should get the same correct output you wrote down above.
 */
