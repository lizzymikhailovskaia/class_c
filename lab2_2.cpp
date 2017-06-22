// Lab 2 tryIt2C
#include <iostream>
using namespace std;

int main()
{
  int a = 5, b = 2, answer1;
  double c = 2.0, answer2;

  cout << "tryIt2C" << endl;                //expected_output tryIt2C //Observed_output tryIt2C
  cout << a + b << " " << a - b << endl;    //expected_output  7 3  //Observed_output 7 3
  cout << a * b << " " << a % b << endl;        //expected_output 10 1 //Observed_output 10 1
  cout << a / b << " " << a / c << endl;      //expected_output 2 2.5   //Observed_output 2 2.5

  answer2 = a / c;
  answer1 = answer2;
  cout << answer1 << " " << answer2 << endl;          //expected_output 2.5 2.5  //Observed_output 0 0

  a = a - 1;
  b = a * 2;
  c = a * b + c;
  cout << a << " " << b << " "<< c << endl;             //expected_output 5 2 2  //Observed_output 5 2 2

  return 0;

}
