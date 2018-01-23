/* Lizzy Mikhailovskaia
Dave Harden
10/29/17
CS 110B
Assignment 10.1 */

#include<iostream>
#include "fraction.h"
#include <cstdio>
using namespace std;

//default constructor
Fraction::Fraction()
{
   num = 0;
   denom = 1;
}






//parameterised constructor
Fraction::Fraction(int n,int d)
{
   num = n;
   denom = d;
   simplify();
}






//print the fractions
void Fraction::print() const
{
   cout << num << "/" << denom;
}






// this function multiplies the fraction of calling object by fraction of object recved as argument
Fraction Fraction::multipliedBy(Fraction f) const
{
   Fraction result;
   result.num = num * f.num;
   result.denom = denom * f.denom;
   result.simplify();
   return result;
}






// this function divides the fraction of calling object by fraction of object recved as argument
Fraction Fraction::dividedBy(Fraction f)
{
   Fraction result;
   result.num = num * f.denom;
   result.denom = denom * f.num;
   result.simplify();
   return result;
}






// this function add the fraction of calling object and fraction of object recved as argument
Fraction Fraction::addedTo(Fraction &f)
{
   Fraction result;
   result.denom = denom * f.denom;
   result.num = result.denom / denom * num + result.denom / f.denom * f.num;
   result.simplify();
   return result;
}






// this function subtract the fraction of object recved as argument from fraction of calling object.
Fraction Fraction::subtract(Fraction &f)
{
   Fraction result;
   result.denom = denom * f.denom;
   result.num = result.denom / denom * num - result.denom / f.denom * f.num;
   result.simplify();
   return result;
}






//checks whether fraction of calling object is equal to the fraction of object 'f' or not
bool Fraction::isEqualTo(Fraction &f) const
{
   if(num == f.num && denom == f.denom)
       return true;
   else
       return false;
}







// this function reduces the calling object
void Fraction::simplify()
{
   int k = 2;
   while(k <= num && k <= denom)
   {
       if(num % k == 0 && denom % k == 0)
       {
       num = num / k;
       denom = denom / k;
       k = 1;
       }
   k++;
   }
}
