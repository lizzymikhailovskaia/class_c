#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void create_queue(unsigned &h,unsigned &t,unsigned &l,char q[]);
unsigned length(const unsigned h,const unsigned t,const unsigned l,char q[]);
void enqueue(unsigned &h,unsigned &t,unsigned &l,char q[],char std_element);
char serve(unsigned &h,unsigned &t,unsigned &l,char q[]);
void terminate_queue(unsigned &h,unsigned &t,unsigned &l,char q[]);
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
  unsigned h, t, l;
  char q[100];
  bool is_palindrome = true;

  int length = strlen(word);

  create_queue(h, t, l, q);
  for (int i = 0; i < length; i++){
    enqueue(h, t, l, q, word[i]);
  }
  for (int i = length - 1; i >= 0; i--){
    char next_item = serve(h, t, l, q);
    if (next_item != word[i]){
      is_palindrome = false;
    }
  }

  return is_palindrome;
}

//part2
void create_queue(unsigned &h,unsigned &t,unsigned &l,char q[]){
  //results: the linear data structure, queue, is initialized (or created)
  h = 100;
  t = 100;
  l = 0;
}

unsigned length(const unsigned h,const unsigned t,const unsigned
l,char q[]){
  //requires: create_queue() is already executed
  //results: the current number of elements in the queue
  return l;
}

void enqueue(unsigned &h,unsigned &t,unsigned &l,char q[],char
std_element){
  //requires: create_queue() is already executed and l < qsize
  //results: std_element is the most recently arrived element of the queue
  h--;
  l++;
  q[h] = std_element;
}

char serve(unsigned &h,unsigned &t,unsigned &l,char q[]){
  //requires: create_queue() is already executed and 0 < l
  //results: the longest waiting element enqueued onto the queue is served and it is no longer on the queue q[]
  t--;
  return q[t];
}
void terminate_queue(unsigned &h,unsigned &t,unsigned &l,char
q[]){
  //results: terminate the queue by resetting both the h and the t
  h = 100;
  t = 100;
  l = 0;
}
