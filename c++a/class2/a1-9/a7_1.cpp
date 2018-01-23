// Lizzy (Elizaveta) Mikhailovskaia, CS 110B-Programming Fundamentals: C++-831 and 832
// Date: 10-08-2017,    Instructor: Harden David

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);



int main() {
    // 1.
    char word[100];
    char letter;
    cout << "Enter the word in which you want to find the latest index: ";
    cin >> word;
    cout << " Enter the letter: ";
    cin >> letter;
    cout << lastIndexOf(word, letter) << endl;
    cout << "*********************************************************" << endl;

    //2.
    char string [100];
    cout << "You can input a string of characters or a sentence and I will reverse it for you" << endl;
    cin >> string;
    cout << endl;
    cout << "Your sentence or string in reverse is: " << endl;
    reverse(string); // string reversed function call
    cout << string << endl; // srting reprinted as is (forward)
    cout << "*********************************************************" << endl;

    //3.
    char sentence[100];
    char character;
    char change_char;
    cout << "Enter the word in which you want to replace a letter: ";
    cin >> sentence;
    cout << " Enter the replacement letter: ";
    cin >> character;
    cout << " Enter the letter of which you want to replace: " ;
    cin >> change_char;
    cout << replace(sentence, character,change_char ) << endl;
    cout << sentence << endl;
    cout << "*********************************************************" << endl;


    //4.
    char text[100];
    cout << "Enter a word to check is it a Palindrom or not: ";
    cin >> text;
    bool palindrome = isPalindrome(text);
    if(palindrome == false)
  	    cout << text << " is not a Palindrome String" << endl;
    if(palindrome == true)
  	    cout << text << " is a Palindrome String." << endl;
        cout << "*****************************************************" << endl;

    //5.
    char inString[10000];
    cout << "Enter a string and I convert to all uppercase " << endl;
    cin >> inString;
    toupper(inString);
    cout << inString << endl;
    cout << "*********************************************************" << endl;

    //6.
    char new_string[10000];
    cout << "Ente a srting and I'll count how many letter in this string: " <<endl;
    cin >> new_string;
    cout << numLetters(new_string) << "characters  in this string. " << endl;

    return 0;
}






//1.This function finds the last index where the target char can be found in
//the string. it returns -1 if the target char does not appear in the string.
// The function should be case sensitive (so 'b' is not a match for 'B').
int lastIndexOf(const char* inString, char target) {
    int i = strlen(inString) - 1;
    while (i >= 0 ) {
        if (inString[i] == target)
            return i;
        i--;
    }
    return -1;
}






//2.This function alters any string that is passed in.
//It should reverse the string. If "flower" gets passed in it should be reversed
//in place to "rewolf". For efficiency, this must be done "in place",
//i.e., without creating a second array.
void reverse(char* inString) {
  	int len = strlen(inString);
    char swap;
    int i = 0;
    while (i < len/2) {
      swap = inString[i];
      inString[i] = inString[len-i-1];
      inString[len-i-1] = swap;
      i++;
    }
}






//3.This function finds all instances of the char 'target' in the string and
//replace them with 'replacementChar'. It returns the number of replacements that it makes.
//If the target char does not appear in the string it should return 0.
int replace(char* inString, char target, char replacementChar) {
  int i = 0;
  int count = 0;
  while (i < strlen(inString)) {
      if (inString[i] == target) {
          count += 1;
          inString[i] = replacementChar;
      }
      i++;
  }
  return count;
}






//4.This function returns true if the argument string is a palindrome.
//It returns false if it is no. A palindrome is a string that is spelled
// the same as its reverse. For example "abba" is a palindrome. So are "hannah" and "abc cba".
bool isPalindrome(const char* inString){
    int length = strlen(inString); //length of the text
  	int i = 0;
  	while (i < length) {
    	  if(inString[0 + i] != inString[(length - 1)-i]){
    		    return false;
    		}
    	  i++;
  	}
  	return true;
}






//5.This function converts the c-string parameter to all uppercase.
void toupper(char* inString) {
  int i = 0;
  while (i < strlen(inString)) {
      inString[i] = toupper(inString[i]);
      i ++;
  }
}






// 6.This function returns the number of letters in the c-string.
int numLetters(const char* inString) {
    return strlen(inString);
}

/*
lizzy@Lizzys-MBP  ~/class_c/class2   master ●  g++ -o output a7_1.cpp   && ./output
Enter the word in which you want to find the latest index: dog
 Enter the letter: d
0
*********************************************************
You can input a string of characters or a sentence and I will reverse it for you
god

Your sentence or string in reverse is:
dog
*********************************************************
Enter the word in which you want to replace a letter: dog
 Enter the replacement letter: g
 Enter the letter of which you want to replace: d
1
dod
*********************************************************
Enter a word to check is it a Palindrom or not: poop
poop is a Palindrome String.
*****************************************************
Enter a string and I convert to all uppercase
dog
DOG
*********************************************************
Ente a srting and I'll count how many letter in this string:
lolipop
7 in this string. */
