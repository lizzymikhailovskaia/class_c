// /* Elizaveta Mikhailovskaia
// A program for user ask for how many siblings do you have.
// Display each item's. */

// /* Elizaveta Mikhailovskaia
// A program for user ask for how many siblings do you have.
// Display each item's. */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string mystr;
  int siblings = 0;
  string allName;


  do {
    cout << "Enter how many siblings do you have: ";
    getline (cin,mystr);
    stringstream(mystr) >> siblings;
    string siblingsName;
    if (siblings == -2)
      break;
    else  if (siblings == -1)
      cout << "How it even possible? Please put correct number: "<< endl;
    
    else if (siblings == 0)
    {
      cout << "You are only 1 child."<< endl;
      return 0;
    }
    else
    {
      if (siblings <=3)
        cout << "You have a nice family"<< endl;
      else
        cout << "You have a big family"<< endl;
      for (int x = 1; x <= siblings; x++)
      {
        cout << " Puts a "<< x<< "name of you siblings separated by one or more spaces: "<<endl;
        getline (cin, siblingsName);
        allName+=siblingsName + "  ";
        if (x<siblings){
          allName=allName + ",";
        }
      }
      cout << " Your brother/sister name is: " << allName<<endl;
      return 0;
    }
  } while (true);

  return 0;
}
