#include <iostream>
#include <string>
#include "stack.h"
#include "stack.cpp"
using namespace std;


int main()
{
  string expression;
  cout<< "Please enter well formed an arithmetic expression " <<endl;
  cin >> expression;

  Stack stackClass;
  StackStruct* stack = stackClass.create_stack();

  int index = 0;
  char ch;
  while (1)
  {
    ch = expression[index];
    if (ch == '\0') {
      break;
    }
    index ++;

    // convert char to integer
    int num = ch - '0';
    if(num > 0 || ch == '0')
    {
      // TODO read in the whole number
      StdElementStruct el;
      el.operand = num;
      stackClass.push(stack, el);
    }
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
      StdElementStruct el;
      el.op = ch;
      stackClass.push(stack, el);
    }
    else if (ch == ')')
    {
      StdElementStruct first = stackClass.pop(stack);
      StdElementStruct op = stackClass.pop(stack);
      StdElementStruct second = stackClass.pop(stack);

      int result;

      switch(op.op) {
        case '+' :
          result = first.operand + second.operand;
          break;
        case '-' :
          result = first.operand - second.operand;
          break;
        case '*' :
          result = first.operand * second.operand;
          break;
        case '/' :
          if (second.operand == 0)
          {
            cout << "Division by zero!" << endl;
            break;
          }
          result = first.operand / second.operand;
          break;
      }

      StdElementStruct el;
      el.operand = result;
      stackClass.push(stack, el);
    }

  }

  StdElementStruct answer = stackClass.pop(stack);
  cout << "The answer is " << answer.operand << endl;

  stackClass.terminate_stack(stack);

  return 0;
}
