#include <iostream>
using namespace std;

int main() {

cout << ( 3 == 4) << endl;       //Expected Output F-0
cout << ( 3 == 3) << endl;       //Expected Output T-1
cout << ( 5 == 3 + 2) << endl << endl; //Expected Output T-1

cout << (7 > 5) << endl;         // Expected Output T-1
cout << (7 > 5 + 2) << endl;      //Expected Output F-0
cout << (2 >= 8 % 3) << endl << endl; //Expected Output T-1

cout << (8 < 6) << endl;             //Expected Output F-0
cout << (3 * 5 < 2 * 9 - 1) << endl;   //Expected Output T-1
cout << (5 * 4 <= 40 / 2) << endl << endl; // Expected Output T-1

cout << (3 != 5) << endl;            //Expected Output T-1
cout << (3 != 9 - 2 * 3) << endl;     //Expected Output F -0
cout << (10 != (4 * 5) / 2) << endl << endl; // Expected Output F-0

cout << (5 > 6 && 3 < 4) << endl;     //Expected Output F-0
cout << (5 > 6 || 3 < 4) << endl;      // Expected Output T-1
cout << (!(7 > 6)) << endl << endl;     // Expected Output F-0

cout << ( 2 * 3 == 6 && !(1 > 2) ) << endl;   // Expected Output T-1
cout << ( !(2 * 3 == 6 && 1 > 2) ) << endl;   // Expected Output T-1
cout << ( !(2 * 3 == 6 && 1 != 2) ) << endl;   // Expected Output F-0
return 0;
}
