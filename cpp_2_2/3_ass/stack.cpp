#include <iostream>
#include "stack.h"
#include "unit.h"
#include "queue.h"
#include <string>
#include <cstring>

using namespace std;

bool Stack::compare(string word)

{
    bool is_palindrome = true;
    int length = strlen(word);
    for (int i = length - 1; i >= 0; i--)
        {
            char next_item = serve();
            if (next_item != word[i])
            {
            is_palindrome = false;
            }
        }
return is_palindrome;
};

bool Stack::check(string word)
{
bool is_palindrome = true;
int length = strlen(word);
create_stack);
for (int i = 0; i < length; i++)
{
    enqueue(h, t, l, q, word[i]);
}
return compare(word)
}

void Stack::enqueue(char input)
{
    top = input;
    userStack[length] = input;
    length++;
}

char Stack::serve()
{
    char tempTop = top;
    top = userStack[length];
    delete userStack[length];
    length--;
return tempTop;
}
