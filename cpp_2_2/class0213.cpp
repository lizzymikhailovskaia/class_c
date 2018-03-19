/* Greatest Common Divisor, g(x,y) can be defined recursively as follows:
gcd(x,y) = y if (y <= x) && (x%y == 0); gcd(x,y) = gcd(y,x) if x < y;
gcd(x,y) = gcd(y, x%y) otherwise
•write a recursive function,
int gcd(int x, int y);
•implement the same function using an iterative loop */

include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

gcd(x,y);



int main() {
  cout << " Please enter an integer x: ";
  cin >> x;
  cout << " Please enter an integer y: ";
  cin >> y;
  gcd(x,y);
  cout << " Greatest Common Divison for x,y: " << gcd(x,y);
  }


  gcd(x,y) {
    if (y <= x) && (x%y == 0);

}
