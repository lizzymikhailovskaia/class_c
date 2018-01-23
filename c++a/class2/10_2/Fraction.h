/*This is the header file (interface file) for the Fraction class.

    Dave Harden
    6/29/05
    CS nn
    Assignment nn.1

    The Fraction class can be used to represent numbers that can be expressed as
    the ratio of two integers, that is, rational numbers or "Fraction"s.

    Fraction();
        post: calling object has the value 0.

    Fraction(int inNumerator, int inDenominator);
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
        post: true is returned if the calling object is equal to otherFraction, otherwise false is returned.*/

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
    public:
        Fraction();
        Fraction(int inNumerator, int inDenominator);
        void print() const;
        Fraction addedTo(const Fraction& otherFraction) const;
        Fraction subtract(const Fraction& otherFraction) const;
        Fraction multipliedBy(const Fraction& otherFraction) const;
        Fraction dividedBy(const Fraction& otherFraction) const;
        bool isEqualTo(const Fraction& otherFraction) const;
    private:
        int numerator;
        int denominator;
        void simplify();
};


#endif
