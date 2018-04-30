#include <iostream>
using namespace std;
class Date
{
    public:
    int day, month, year;



    void printDateNumbers();

    void printDateMonthFirst();

    void printDateDayFirst();

    void printDateNumbers() {
       cout << month << "/" << day << "/" << year;
    };

    void Date::printDateMonthFirst() {
       cout << monthName() << " " << day << ", " << year;
    };

    void Date::printDateDayFirst(){
       cout day << " " << monthName() << " " << year;
    };

    private:
    string monthName()
    {
        vector<string> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "Nobember", "December" };
        int month_number = 2;

        return months[ month_number - 1 ];
    }
};
