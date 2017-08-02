#include <iostream>
using namespace std;

int main()
{
   int i,       // Loop control variable
       sum;     // Accumulator

   i = 1;
   while (i < 10)
   {  cout << i << ' ';
      i +=2;
   }
   cout << "\nAfter loop i = " << i
        << endl << endl;                 // Expected Output 11

   i = 5;
   while (i > 0)
      cout << i-- << ' ';
   cout << "\nAfter loop i = " << i
        << endl << endl;                 // Expected Output 0

   i = 1;
   do
   {  cout << i * i << ' ';
      i++;
   } while (i <= 3);
   cout << "\nAfter loop i = " << i  // this statement will execute when while (false)
        << endl << endl;              // Expected Output 4

   sum = 0;
   for (i = 0; i < 4; i++)
      sum += i;
   cout << "After loop i = " << i << endl;    // Expected Output 4
   cout << "sum = " << sum << endl << endl;     // Expected Output 6

   for (i = 0; i++ < 4;)
      cout << i << ' ';
   cout << "\nAfter loop i = " << i << endl; // Expected output 1 2 3 4 , After loop i = 5

/*
   i = 0 < 4 i++ i = 1 cout 1
       1 < 4 i++ i = 2 cout 1 2
       2 < 4 i++ i = 3 cout 1 2 3
       3 < 4 i++ i = 4 cout 1 2 3 4
       4 < 4 i++ i = 5
*/

   return 0;
  }
