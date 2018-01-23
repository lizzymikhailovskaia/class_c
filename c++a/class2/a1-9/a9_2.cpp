/*
    Dave Harden
    6/29/05
    CS 110B
    Assignment 9.1

    The Fraction class can be used to represent numbers that can be expressed as
    the ratio of two integers, that is, rational numbers or "Fraction"s.


    void set(int inNumerator, int inDenominator);
        post: calling object is equal to a Fraction with numerator inNumerator and denominator
              inDenominator.

    void print() const;
        post: the calling object has been printed to cout in the form numerator/denominator

    Fraction addedTo(const Fraction& otherFraction) const;
        post: the sum of the calling object and otherFraction is returned.

    Fraction subtract(const Fraction& otherFraction) const;
        post: the difference of the calling object and otherFraction is returned.

    Fraction multipliedBy(const Fraction& otherFraction) const;
        post: the product of the calling object and otherFraction is returned.

    Fraction dividedBy(const Fraction& otherFraction) const;
        post: the quotient of the calling object and otherFraction is returned.

    Fraction isEqualTo(const Fraction& otherFraction) const;
        post: returns true if the calling object is equal to otherFraction, false otherwise.
*/


#include <iostream>
using namespace std;

class Fraction {
    public:
        void set(int inNumerator, int inDenominator);
        void print() ;
        Fraction addedTo(const Fraction& otherFraction) ;
        Fraction subtract(const Fraction& otherFraction) ;
        Fraction multipliedBy(const Fraction& otherFraction) ;
        Fraction dividedBy(const Fraction& otherFraction) ;
        bool isEqualTo(const Fraction& otherFraction) ;
    private:
        int numerator;
        int denominator;
};




void Fraction::set(int inNumerator, int inDenominator){
    numerator = inNumerator;
    denominator = inDenominator;
}





void Fraction::print()  {
    cout << numerator << "/" << denominator;
}





Fraction Fraction::addedTo(const Fraction& otherFraction)  {

    Fraction result;

    result.numerator = numerator * otherFraction.denominator +
                       otherFraction.numerator * denominator;
    result.denominator = denominator * otherFraction.denominator;
    return result;
}






Fraction Fraction::subtract(const Fraction& otherFraction)  {

    Fraction result;

    result.numerator = numerator * otherFraction.denominator -
                       otherFraction.numerator * denominator;
    result.denominator = denominator * otherFraction.denominator;
    return result;
}





Fraction Fraction::multipliedBy(const Fraction& otherFraction)  {

    Fraction result;

    result.numerator = numerator * otherFraction.numerator;
    result.denominator = denominator * otherFraction.denominator;
    return result;

}






Fraction Fraction::dividedBy(const Fraction& otherFraction)  {

    Fraction result;

    result.numerator = numerator * otherFraction.denominator;
    result.denominator = denominator * otherFraction.numerator;
    return result;

}



bool Fraction::isEqualTo(const Fraction& otherFraction)  {
    return numerator * otherFraction.denominator == otherFraction.numerator * denominator ;
}
