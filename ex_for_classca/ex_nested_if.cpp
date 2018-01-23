// Determine the user's loan qualifications.

#include <iostream>
using namespace std;

int main()
{
  double employed, recentGrad;
  cout << "Enter Y if you are employed: ";
  cin >> employed;
  cout << "Enter  Y for recentGrad if you are special: ";
  cin >> recentGrad;
  if (employed == 'Y')
  {
    if (recentGrad == 'Y') //Nested if
    {
      cout << "You qualify for the special ";
      cout << " interest rate.\n";
    }
    else // Not a recent grad, but employed
    {
      cout << "You must have graduated from ";
      cout << " college in the past two\n";
      cout << " years to qualify. \n";
    }
  }
  else // Not employed
  {
    cout << "You must be employed to qualify.\n";
  }
  return 0;
}
