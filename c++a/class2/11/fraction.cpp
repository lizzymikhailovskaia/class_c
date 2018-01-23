#include<iostream>
#include "fraction.h"
#include <cstdio>
using namespace std;


// member functions
fraction::fraction() {
//fraction initialized to 0/1
    num = 0;
    deno = 1;
}






fraction::fraction(int n, int d) {
    if (SetValue(n,d) == false)
    SetValue(0,1);
}






void fraction::read()
{
char divSign;
do
{
cin >> num >> divSign >> deno;
if (deno == 0)
cout << "Bad Fraction. Try again: ";
} while (deno == 0);
}
void fraction::print()
// print a fraction, in the form "num/deno."
{
cout << num << '/' << deno;
}
int fraction::GetNum()
{
return num;
}
int Fraction::GetDeno()
{
return deno;
}
