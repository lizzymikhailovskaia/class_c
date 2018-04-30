#include <iostream>
using namespace std;

class Weather
{
  private:
  int Place, Humidity, Temp;
  public:
    Weather(int P = 2)
    {
        Place = P;
        Humidity = 60;
        Temp = 20;
    }
    void Hot (int T)
    {
        Temp += T;
    }
    void Humid(int H)
    {
        Humidity += H;
    }
    void JustSee()
    {
        cout << Place << ":" << Temp << "&" << Humidity << "%" << endl;
    }
};

int main()
{
    Weather A, B(5);
    A.Hot(10);
    A.JustSee();
    B.Humid(15);
    B.Hot(2);
    B.JustSee();
    A.Humid(5);
    A.JustSee();
}
