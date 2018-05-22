#ifndef Stack_h
#define Stack_h
#include "unit.h"
#include <string>
#include <cstring>

class Stack : public Unit
{
    public:
    bool compare(std::string);
    bool check(std::string);
    void enqueue(char);
    char serve();
    void create_stack();
};

#endif
