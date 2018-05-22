#include <iostream>
#include "stack.h"
#include "unit.h"
#include "queue.h"
#include <string>
#include <cstring>

using namespace std;

int main()
{
    const int MAX_LETTERS = 20;
    string word;
    cout << "Please enter a word: " << endl;
    cin >> word;

Queue queue1;
    if (queue1.check(word))
    cout << " is a palindrome." << endl;
    else
    cout << " is not a palindrome." << endl;

return 0;

}
