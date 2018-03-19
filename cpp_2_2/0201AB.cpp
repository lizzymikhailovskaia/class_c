//Lizzy Mikhailovskaia

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes

bool toCelciusByReference (float &);

// main function

int main(){
        float temperature;

        cout << "Enter temperature in (F): ";
        cin >> temperature;

        if (toCelciusByReference(temperature) == true)
                cout << "Above 32" << endl;
        else
                cout << "Below 32" << endl;

        return 0;
}

// function definition

bool toCelciusByReference(float &temperature){
        float C;
        C = 5.0/9.0 * (temperature-32);
        cout << "Celcius: " << setprecision(2) << C << endl;

        if (C > 32)
                return true;
        else
                return false;
}