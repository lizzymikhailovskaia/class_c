//Elizaveta_Mikhailovskaia
//You own a gym and need to write a program that input the name of a gym member,
// the original weight in lbs before joing the gym the number of pounds he/she lost,
//and the % of total weight that was lost(loss/original weight)*100.
//The program should then output that member name, the percentage of loss of weight/original weight
//and his/her current weight. Make sure the output shows decimal values.
//Here is some sample output. User input is shown in bold:

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
 {
  string mystr;
  string name;
  double  weight = 0;
  double  loss_weight = 0;
  double percentage = 0;
  int new_weight = 0;
  do {

    cout << "What is the member's name? ";
    getline (cin,mystr);
    stringstream(mystr) >> name;
    if (name == "0") break;

    cout << "How much did you weight(lbs)?: "<< endl;
    getline (cin,mystr);
    stringstream(mystr) >> weight;

    cout << "How many pounds have you lost?: "<< endl;
    getline (cin,mystr);
    stringstream(mystr) >> loss_weight;

    percentage = (loss_weight/weight)*100;
    std::cout << std::fixed << std::setprecision(2) << percentage << '\n';
    new_weight = weight - loss_weight;

    cout << "--" << endl;
    cout << "The member "<<name << " has lost "<< percentage << " % of weight and now weighs " << new_weight <<" pounds."<<endl;
}
while (true);

  return 0;
}
