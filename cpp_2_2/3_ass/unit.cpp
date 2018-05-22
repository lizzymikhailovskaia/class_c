#include <iostream>
#include "stack.h"
#include "unit.h"
#include "queue.h"
#include <string>
#include <cstring>

using namespace std;

bool Unit::compare(string word)
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
}
