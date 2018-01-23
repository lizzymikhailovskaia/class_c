/*
    Lizzy Mikhailovskaia
    CS 110B
    Assignment 9_1
    10/20/17
    Write a Fraction class whose objects will represent Fractions.You should provide the following member functions:
A set() operation that takes two integer arguments, a numerator and a denominator, and sets the calling object accordingly.
Arithmetic operations that add, subtract, multiply, and divide Fractions. These should be implemented as value returning functions that return a Fraction object. They should be named addedTo, subtract, multipliedBy, and dividedBy. In these functions you will need to declare a local "Fraction" variable, assign to it the result of the mathematical operation, and then return it.
A boolean operation named isEqualTo that compares two Fraction objects for equality. Since you aren't reducing your Fractions, you'll need to do this by cross-multiplying. A little review: if numerator1 * denominator2 equals denominator1 * numerator2, then the Fractions are equal.
An output operation named print that displays the value of a Fraction object on the screen in the form numerator/denominator.
Your class should have exactly two data members, one to represent the numerator of the Fraction being represented, and one to represent the denominator of the Fraction being represented.

*/
#include <iostream>
using namespace std;

class Fraction
{
   private:
       int numerator;
       int denominator;
   public:
       void set (int, int);
       Fraction addedTo(Fraction f);
       Fraction substract(Fraction f);
       Fraction multipliedBy(Fraction f);
       Fraction dividedBy(Fraction f);
       void print ();
       bool isEqualTo(Fraction f);
};

void Fraction::set (int x, int y) {
  numerator = x;
  if (y != 0)
    denominator = y;
  else
    cout << "The division by zero is not defined";
}

Fraction Fraction::addedTo(Fraction f){
   Fraction local;
   local.denominator = f.denominator * denominator;
   local.numerator = f.numerator * denominator + f.denominator * numerator;
   return local;

}

void Fraction::print(){
   cout << numerator << "/" << denominator;
}

Fraction Fraction::substract(Fraction f){
     Fraction local;
     local.denominator = f.denominator * denominator;
     local.numerator = - f.numerator * denominator + f.denominator * numerator;
     return local;
}

Fraction Fraction::multipliedBy(Fraction f){
   Fraction local;
   local.denominator = f.denominator * denominator;
   local.numerator = f.numerator * numerator;
   return local;
}

Fraction Fraction::dividedBy(Fraction f){
   Fraction local;
   if (f.numerator != 0){
       local.denominator = f.numerator * denominator;
       local.numerator = numerator * f.denominator;
   }
   return local;
}

 bool Fraction::isEqualTo(Fraction f){
     if(f.numerator * denominator == numerator * f.denominator)
        return true;
     else
        return false;
 }


int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.substract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }
}

/* lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master ●  g++ -o output a9_1.cpp   && ./output
The product of 9/8 and 2/3 is 18/24
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two fractions are not equal.*/
