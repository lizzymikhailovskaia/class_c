//Lizzy Mikhailovskaia

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void create_stack(unsigned &t,unsigned &d,char s[]);
unsigned depth(const unsigned t,const unsigned d,char s[]);
void push(unsigned &t,unsigned &d,char s[],char std_element);
char pop(unsigned &t,unsigned &d,char s[]);
void terminate_stack(unsigned &t,unsigned &d,char s[]);
bool isPalindrome(const char word[]);


int main()
{
  const int MAX_LETTERS = 20;
  char word[MAX_LETTERS + 1];

  cout << "Please enter a word: "<< endl;
  cin >> word;

  cout << "The word you entered: " <<  word << endl;

  if (isPalindrome(word))
    cout << " is a palindrome." << endl;
  else
    cout << " is not a palindrome." << endl;

  return 0;
}

bool isPalindrome(const char word[]){
  unsigned t, d;
  unsigned t2, d2;
  char s[100];
  bool is_palindrome = true;

  int depth = strlen(word);

  create_stack(t, d, s);
  for (int i = 0; i < depth; i++){
    push( t, d, s, word[i]);
  }

  for (int i = 0; i < depth/2; i++){
    char new_pop;
    new_pop = pop(t, d, s);
    if (new_pop != word[i]){
      is_palindrome = false;
    }
  }

  return is_palindrome;
}

void create_stack(unsigned &t,unsigned &d,char s[]){
//results: the linear data structure, stack, is initialized
  t = -1;
  d = 0;
}

unsigned depth(const unsigned t,const unsigned d,char s[]){
//requires: create_stack() is already executed
//results: the current number of elements in the stack
  return d;
}

void push(unsigned &t,unsigned &d,char s[],char std_element) {
//requires: create_stack() is already executed and depth < ssize
//results: std_element is the most recently arrived element of the stack
  t++;
  d++;
  s[t] = std_element;

}

char pop(unsigned &t,unsigned &d,char s[]){
//requires: create_stack() is already executed and 0 < depth
//results: the most recent element pushed onto the stack is retrieved and it is no longer on the stack s[]

  d--;
  char n = s[t];
  t--;
  return n;
}

void terminate_stack(unsigned &t,unsigned &d,char s[]){
//results: terminate the stack by resetting the top
  t = -1;
}
