#ifndef STACK_H
#define STACK_H
// #include "stack.cpp"

using namespace std;


struct StdElementStruct {
  char op;
  unsigned operand;
};

struct NodeStruct {
  StdElementStruct el;
  NodeStruct *next;
};

struct StackStruct {
  NodeStruct *top;
};

class Stack {
    public:
        StackStruct *create_stack();
        void push(struct StackStruct* stack, StdElementStruct el);
        StdElementStruct pop(StackStruct* stack);
        void terminate_stack(StackStruct* stack);
};


#endif
