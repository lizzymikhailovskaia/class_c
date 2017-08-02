#include <iostream>
using namespace std;


void printMessage();
int tripleIt(int someNum);

int main()
{
  int value = 2;

  cout << "Hello from main.\n";  // Expected Output:  Hello from main.
  printMessage();                //                   Hello from PrintMessage.

  cout << "\nValue returned by tripleIt is " << tripleIt(value) << endl; //Expected Output: Value returned by tripleIt is 8
  cout << "In main value now is " << value  << endl;              //Expected Output:  In main value now is 2

  value = tripleIt(value);
  cout << "In main value now is " << value << endl;                    // Expected Output: In main value now is 8

  value = tripleIt(value);
  cout << "In main value now is " << value << endl;             // Expected Output: In main value now is 512
  cout << "Goodbye from main.\n";                                        // Expected Output: Goodbye from main.

  return 0;
}

void printMessage()
{
  cout << "Hello from PrintMessage.\n";
}

int tripleIt(int someNum)
{
  return someNum * someNum * someNum; //1) 2 *2* 2 = 8     2) 8 * 8 * 8 = 512
}
