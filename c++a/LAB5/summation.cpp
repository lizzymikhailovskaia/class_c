#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int denom,            // Denominator of a particular term
        finalDenom = 64;  // Denominator of the final term
    double sum;     // Accumulator that adds up all terms in the series
    int n;
    char ans;

    cout << "Lizzy Mikhailovskaia. \n";

    do {
      sum = 0.0;
      do {
        cout << "This program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n \n";
        cout << "What should n be in the final term (2 - 10)? ";
        cin >> n;
      } while (n < 2 || n > 10);

      for (int power = 1; power <= n; power++)
      {
        denom = std::pow(2, power);
        cout << "1/" << denom;
        if (power < n)
          cout << " + ";
        else
          cout << " = ";
        double a = 1.0/denom;
        sum += a;
      }
      cout << sum << endl;

      cout << "Do you want to play again? ";
      cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    return 0;
}
