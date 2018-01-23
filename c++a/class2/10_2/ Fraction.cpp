/*

File:  Fraction.cpp

    This is the implementation file for the Fraction class.

    Dave Harden
    6/29/05
    CS 110B
    Assignment 10.1

    CLASS INVARIANT: numerator represents the numerator of the Fraction, denominator
    represents the denominator of the Fraction.  The gcf of numerator and
    denominator is always 1.

*/


#include <iostream>
#include <cassert>
#include "Fraction.h"
using namespace std;



Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}




Fraction::Fraction(int inNumerator, int inDenominator){
    assert(inDenominator != 0);
    numerator = inNumerator;
    denominator = inDenominator;
    simplify();
}





void Fraction::print() const {
    cout << numerator << "/" << denominator;
}





Fraction Fraction::addedTo(const Fraction& otherFraction) const {
    // the method I would expect most of you to use:
    Fraction result;

    result.numerator = numerator * otherFraction.denominator +
                       otherFraction.numerator * denominator;
    result.denominator = denominator * otherFraction.denominator;
    result.simplify();
    return result;

    // a more succinct method:
    return Fraction(numerator * otherFraction.denominator + otherFraction.numerator * denominator,
                    denominator * otherFraction.denominator);
}






Fraction Fraction::subtract(const Fraction& otherFraction) const {
    // the method I would expect most of you to use:
    Fraction result;

    result.numerator = numerator * otherFraction.denominator -
                       otherFraction.numerator * denominator;
    result.denominator = denominator * otherFraction.denominator;
    result.simplify();
    return result;

    // a more succinct method:
    return Fraction(numerator * otherFraction.denominator - otherFraction.numerator * denominator,
                    denominator * otherFraction.denominator);
}





Fraction Fraction::multipliedBy(const Fraction& otherFraction) const {
    // the method I would expect most of you to use:
    Fraction result;

    result.numerator = numerator * otherFraction.numerator;
    result.denominator = denominator * otherFraction.denominator;
    result.simplify();
    return result;

    // a more succinct method:
    return Fraction(numerator * otherFraction.numerator,
                    denominator * otherFraction.denominator);
}






Fraction Fraction::dividedBy(const Fraction& otherFraction) const {
    // the method I would expect most of you to use:
    Fraction result;

    result.numerator = numerator * otherFraction.denominator;
    result.denominator = denominator * otherFraction.numerator;
    result.simplify();
    return result;

    // a more succinct method:
    return Fraction(numerator * otherFraction.denominator,
                    denominator * otherFraction.numerator);
}






bool Fraction::isEqualTo(const Fraction& otherFraction) const {
    return numerator == otherFraction.numerator && denominator == otherFraction.denominator;
}



/*

post: the gcf of numerator and denominator equals 1.

algorithm:  finds the gcf of numerator and denominator and then divides both
numerator and denominator by gcf.  The gcf is found by starting at the numerator
or denominator, whichever is least, and decrementing until a number is found
that goes into both numerator and denominator evenly.

*/

void Fraction::simplify(){
    if (numerator == 0) {
        denominator = 1;
    } else {
        int gcf = min(numerator, denominator);

        while (gcf > 0 && (numerator % gcf != 0 || denominator % gcf != 0)){
            gcf--;
        }

        numerator /= gcf;
        denominator /= gcf;
    }
}
