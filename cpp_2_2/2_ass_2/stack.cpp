#include <iostream>
#include <string>
#include <cassert>
#include <cstdio>
#include "stack.h"

using namespace std;


//results: the linear data structure, stack, is initialized (or created)
StackStruct* Stack::create_stack()
{
  StackStruct* stack;
  stack = new StackStruct;
  stack->top = NULL;
  return stack;
}

//requires: create_stack() is already executed
//results: StdElementStruct is the most recently arrived element of the stack
void Stack::push(struct StackStruct* stack, StdElementStruct el)
{
  NodeStruct *node;

  node = new NodeStruct;
  node->el = el;
  node->next = stack->top;
  stack->top = node;
}

//requires: create_stack() is already executed and top != NULL
//results: the most recent element pushed onto the stack is retrieved and it is no longer on the stack
StdElementStruct Stack::pop(StackStruct* stack)
{
  // // NOTE: it'll be good to gracefully handle pop on an empty stack
  NodeStruct temp = *stack->top;
  stack->top = stack->top->next;
  StdElementStruct popped = temp.el;

  return popped;
}

//requires: create_stack() is already executed
//results: terminate the stack by resetting the top
void Stack::terminate_stack(StackStruct* stack)
{
  stack->top = NULL;
}
