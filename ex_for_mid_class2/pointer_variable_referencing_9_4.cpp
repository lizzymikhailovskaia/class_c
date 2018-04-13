// This program demonstrates a pointer variable referencing different variables
#include <iostream>
using namespace std;

int main(){
  int x = 25, y = 50, z = 75; //three int variables
  int *ptr;   //pointer variables

  //Display the contents of x, y, z
  cout << "Here are the values of x, y, z: " <<endl;
  cout << x << " "<< y << " "<< z << endl;

  //Use the pointer to manipulate x,y,z

ptr = &x; //store the address of x in ptr.
*ptr += 100; // add 100 to the value in x

ptr = &y;//store the address of y in ptr.
*ptr+= 100;  // add 100 to the value in y

ptr = &z;
*ptr +=100;

//Display the contents of x, y, z
cout << "Once again, here are the value of x, y, z: "<<endl;
cout << x << " "<<y << " " <<z<<endl;
return 0;
}
