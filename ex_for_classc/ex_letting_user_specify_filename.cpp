// This program lets the user enter a filename.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputFile;
  string filename;
  int number;

  // Get the filename from the user.
  cout << "Enter the filename: ";
  cin >> filename;

  // Open the file.
  inputFile.open(filename.c_str());

  // if the file successfully opened, process it.
  if (inputFile)
  {
    //read the numbers from the file and display them.
    while (inputFile >> number)
    {
      cout << number << endl;
    }
    // close the file.
    inputFile.close();
  }
  else
  {
    // display an error message.
    cout << "Error opening the file.\n";
  }
  return 0;
}
