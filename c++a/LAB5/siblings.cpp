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
    cout << "How many brothers and sisters do you have?";
    getline (cin,mystr);
    stringstream(mystr) >> siblings;
    string siblingsName;
    if (siblings == -2)
      break;
    else  if (siblings == -1)
      cout << "How could that be?"<< endl;

    else if (siblings == 0)
    {
      cout << "Oh, you were an only child!"<< endl;
      return 0;
    }
    else
    {
      if (siblings <=3)
        cout << "Sounds like a nice size family"<< endl;
      else
        cout << "A big family!"<< endl;
      for (int x = 1; x <= siblings; x++)
      {
        cout << "What's the name of your #"<< x<< "sibling?"<<endl;
        getline (cin, siblingsName);
        allName+=siblingsName + " ";
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
