// Lab 5 tryIt5A //Lizzy Mikhailovskaia
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a = 5, b = 5, c = 3, d = 7;

  cout << a-- << ' '; // Expected Output 5
  cout << a << ' ';  //Expected Output 4
  cout << a-- << ' '<< a-- << ' '; //Expected Output 4 3
  cout << a-- << ' '<< a << endl;   // Expected Output 2 1

  cout << ++b << ' ';  // Expected Output 6
  cout << b << ' ';   // 6
  cout << ++b << ' ' << ++b << ' '; // Expected Output 7 8
  cout << ++b << ' ' << b << endl; //Expected Output 9 9

  a = c++ *d--; //3*7= Expected Output 21
  cout << a << " " << c << ' '<< d<<endl; //Expected Output 4 6

  return 0;
}
