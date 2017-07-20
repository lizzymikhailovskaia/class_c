// Lab 5 tryIt5A //Lizzy Mikhailovskaia
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a = 5, b = 5, c = 3, d = 7;

  cout << a-- << ' '; // 5
  cout << a << ' ';  // 4
  cout << a-- << ' '<< a-- << ' '; //4 3
  cout << a-- << ' '<< a << endl;   //2 1

  cout << ++b << ' ';  //6
  cout << b << ' ';   // 6
  cout << ++b << ' ' << ++b << ' '; // 7 8
  cout << ++b << ' ' << b << endl; //9 9

  a = c++ *d--; //3*7= 21
  cout << a << " " << c << ' '<< d<<endl; //

  return 0;
}
