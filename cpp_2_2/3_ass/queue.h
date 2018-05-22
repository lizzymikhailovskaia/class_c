#ifndef Queue_h
#define Queue_h
#include "unit.h"
#include <string>
#include <cstring>

class Queue : public Unit
{
    private:
    unsigned h, t, l;
    char *q;

    public:
    Queue();
    bool compare(std::string);
    bool check(std::string);
    void enqueue(char);
    char serve();
    void create_queue();

    };

#endif
