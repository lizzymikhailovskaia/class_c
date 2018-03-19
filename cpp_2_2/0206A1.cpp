/*Programming Exercise A
•The local taqueria wants you to write a program which tracks
the number of burritos they sell each day and help them analyze their business.
There are four types of burritos: carnitas, beef, shrimp, and vegetarian.
•Your program should prompt the user for the number of burritos sold of each type
 of that day, and then print out a daily report listing sales for each burrito type,
total number of burritos sold, and the type of burrito which sold the most.
•You must use two parallel 4-element arrays; one string array to store the names
of the burrito types, and one int array to store the number of burritos sold per type.
 You can store the name of the burrito types using an initialization list. */

 //Lizzy Mikhailovskaia
#include <iostream>
using namespace std;

int main()
{
    string burritoNames[4] = {"carnitas", "beef", "shrimp", "vegetarian"};
    int numSold[4];

    for (int i = 0; i < 4; i++) {
        cout << "Number of " << burritoNames[i] << ": " << endl;
        cin >> numSold[i];
    }

    // print out number of burittos sold per each type of burrito
    cout << "Daily Burrito Sales Report" << endl;
    cout << "--------------------------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << burritoNames[i] << " " << numSold[i] << endl;
    }

    // print out total number of burritos sold
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += numSold[i];
    }

    cout << "--------------------------" << endl;
    cout << "Total Burritos Sold: " << total << endl;

    // print out the highest number of burrito type sold and the number sold
    int highestSale = numSold[0];
    int name;
    for (int i = 1; i < 4; i++) {
        if(numSold[i] > highestSale) {
          highestSale = numSold[i];
          name = i;
        }
    }
    cout << "Best Seller: " << burritoNames[name] << " " << "Number Sold: " << highestSale << endl;
    return 0;
}
