#include <iostream>
#include <zconf.h>

using namespace std;

int getUserInput();
int calculateResult(int old);
void outputResult(int result);

int main() {
    int border = getUserInput();
    int value = -border;
    int result = 0;

    do {
        result = calculateResult(value);
        outputResult(result);
        value++;
        sleep(1);
    } while(value < border);

    return 0;
}

int getUserInput(){
    int number;
    cout << "Please enter number: " << endl;
    cin >> number;
    return number;
}

int calculateResult(int old){
    return old * old;
}

void outputResult(int result){
    cout << "The result is " << result << endl;
}
