#include <iostream>
#include <string>
#include "stack.cpp"
using namespace std;


int main()
{
  string expression;
  cout<< "Please enter well formed an arithmetic expression " <<endl;
  cin >> expression;

  StackStruct* stack = create_stack();

  int index = 0;
  char ch;
  bool lastWasDigit = false;
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
      StdElementStruct el;
      if (lastWasDigit) {
        el = pop(stack);
        el.operand = el.operand * 10 + num;
      } else {
        el.operand = num;
      }
      push(stack, el);
      lastWasDigit = true;
    }
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
      StdElementStruct el;
      el.op = ch;
      push(stack, el);
      lastWasDigit = false;
    }
    else if (ch == ')')
    {
      StdElementStruct first = pop(stack);
      StdElementStruct op = pop(stack);
      StdElementStruct second = pop(stack);

      int result;

      switch(op.op) {
        case '+' :
          result = first.operand + second.operand;
          break;
        case '-' :
          result = second.operand - first.operand;
          break;
        case '*' :
          result = first.operand * second.operand;
          break;
        case '/' :
          if (first.operand  == 0)
          {
            cout << "Division by zero!" << endl;
            break;
          }
          result = second.operand/first.operand;
          break;
          lastWasDigit = false;
      }

      StdElementStruct el;
      el.operand = result;
      push(stack, el);
    }

  }

  StdElementStruct answer = pop(stack);
  cout << "The answer is " << answer.operand << endl;

  terminate_stack(stack);

  return 0;
}
