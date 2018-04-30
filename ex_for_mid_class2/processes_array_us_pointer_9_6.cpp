// This program proccesses an array using pointer notation.

#include <iostream>
using namespace std;

int main(){
  const int SIZE = 5; //size of the array
  int numbers[SIZE]; // array of integers
  int count; //counter variable

  //Get values to store in the array
  //Use pointer notation instead of subscripts.

  cout << "Enter " << SIZE << " numbers: " <<endl;
  for (count = 0; count <SIZE; count ++)
    cin >> *(numbers + count);

    //Display the value in the array.Use pointer notation instead of subscripts
  cout << "Here are the numbers you entered: " <<endl;
  for (count = 0; count < SIZE; count ++)
    cout << *(numbers + count) << " ";
  cout << endl;
  return 0;
}
