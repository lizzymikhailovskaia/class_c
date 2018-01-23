#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{  int someInt,
        w = 5, x = 9, y = 2, z = 7;
    char someChar = 'A';
    cout << "tryIt3A output \n";
    z += 3;                   //(7+3)  // Expected Output  10
    cout << z << "  " << z % w << endl; //(10 10%5)0
    z *= w + y;  //(0* 5+2) // Expected Output 0
    cout << z << endl; // 10
    z -= 60.1;  //Expected Output 70
    cout << z << endl; //Expected Output 9
    cout << (x-1) / (x-w) * y << endl; //Expected Output 4
    cout << (x-1) / ((x-w) * y) << endl; //Expected Output 1
    cout << static_cast<double>(x) / y << endl; //Expected Output 4.5
    cout << x / y << endl; //Expected Output 4
    cout << (w + x % 7 / y) << endl; //Expected Output 6
    cout << (abs(y - w) + sqrt(x)) << endl; //Expected Output 6
    someInt = someChar;
    cout << someChar << "  "
         << someInt << endl; //Expected Output A 65

    return 0;
 }
