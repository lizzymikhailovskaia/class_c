#include <iostream>
using namespace std;

int main() {
  bool hungry = true, 
       sleepy = false, 
       happy = true, 
       lazy = false; 

  cout << hungry << "  " << sleepy << endl;  //Expected Output 1 0
    if (hungry == true) 
      cout << "I'm hungry. \n";              //Expected Output I'm hungry
    if (sleepy == true) 
      cout << "I'm sleepy. \n";             //Expected Output nothing
    if (hungry) 
      cout << "I'm still hungry. \n";      // Expected Output I'm still hungry
    else 
      cout << "I'm not hungry. \n";        //Expected Output nothing
    if (sleepy) 
      cout << "I'm still sleepy. \n";     //Expected Output   nothing
     else 
      cout << "I'm not sleepy. \n";      //Expected Output I'm not sleepy
    if (sleepy) 
      cout << "I'm sleepy. \n";           //Expected Output nothing
    else if (lazy) 
      cout << "I'm lazy. \n";            //Expected Output nothing
    else if (happy) 
      cout << "I'm happy. \n";           //Expected Output I'm happy
    else if (hungry) 
      cout << "I'm hungry. \n";          //Expected Output nothing
  return 0; 
 } 
