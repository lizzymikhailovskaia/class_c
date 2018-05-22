#include <iostream>
#include "stack.h"
#include "unit.h"
#include "queue.h"
#include <string>
#include <cstring>

using namespace std;

Queue::Queue()
{
  q = new char[100];
}

bool Queue::compare(string word)
{
    bool is_palindrome = true;
    int length = word.length();
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

bool Queue::check(string word)
{
    bool is_palindrome = true;
    int length = word.length();

    create_queue();
    for (int i = 0; i < length; i++)
    {

    enqueue(word[i]);
    }

return compare(word);
}

void Queue::enqueue(char std_element)
{
    h--;
    l++;
    q[h] = std_element;
}

char Queue::serve()
{
    t--;
    return q[t];
}

void Queue::create_queue()
{
    h = 100;
    t = 100;
    l = 0;
}
