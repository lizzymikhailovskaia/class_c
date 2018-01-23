/*
    The fraction class contains member functions for constructing and
handling operator interactions between fraction objects.

    fraction()
        postcondition: constructs a fraction object with a numerator
            of zero and a denominator of 1.
    fraction(int whole)
        precondition: A whole number to construct a fraction object.
        postcondition: constructs a fraction object with a numerator
            of whole and a denominator of 1.
    fraction(int num, int den)
        precondition: Integers num and den to initialize the numerator
            and denominator of a fraction object, respectively.
        postcondition: Constructs a fraction object with a numerator of num
            and a denominator of den.
    friend fraction operator+(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: The left and right fractions are added and returned.
    friend fraction operator-(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: The left and right fractions are subtracted and returned.
    friend fraction operator*(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: The left and right fractions are multiplied and returned.
    friend fraction operator/(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: The left and right fractions are divided and returned.
    friend ostream& operator<<(ostream& out, const fraction &f)
        precondition: A fraction f to be outputted through ostream.
        postcondition: outputs f in reduced form.
    friend istream& operator>>(istream& in, fraction &f)
        precondition: A fraction f to be inputted through istream.
        postcondition: takes user input to set values of f.
    friend bool operator<(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is less than the right.
    friend bool operator<=(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is less than or equal to the right.
    friend bool operator>=(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is greater than or equal to the right.
    friend bool operator>(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is greater than the right.
    friend bool operator==(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is equal to the right.
    friend bool operator!=(const fraction& left, const fraction& right)
        precondition: A constant fraction object to the left of the operator and
            a constant fraction object to the right of the operator.
        postcondition: Returns true if the left fraction is not equal to the right.
    fraction operator+=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: The calling fraction and right fraction are added and returned.
    fraction operator-=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: The calling fraction and right fraction are subtracted and returned.
    fraction operator*=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: The calling fraction and right fraction are multiplied and returned.
    fraction operator/=(const fraction& right)
        precondition: A constant fraction on the right of the operator.
        postcondition: The calling fraction and right fraction are divided and returned.
    fraction operator++()
        postcondition: The calling fraction is increased by 1.
    fraction operator++(int)
        postcondition: The calling fraction is increased by 1.
    fraction operator--()
        postcondition: The calling fraction is decreased by 1.
    fraction operator--(int)
        postcondition: The calling fraction is decreased by 1.
*/

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;
namespace cs_Fraction
{
    class Fraction
    {
        public:
            Fraction();
            Fraction(int whole);
            Fraction(int num,
                     int den);
            friend Fraction operator+(const Fraction& left,
                                      const Fraction& right);
            friend Fraction operator-(const Fraction& left,
                                      const Fraction& right);
            friend Fraction operator*(const Fraction& left,
                                      const Fraction& right);
            friend Fraction operator/(const Fraction& left,
                                      const Fraction& right);
            friend ostream& operator<<(ostream& out,
                                       const Fraction &f);
            friend istream& operator>>(istream& in,
                                       Fraction &f);
            friend bool operator<(const Fraction& left,
                                  const Fraction& right);
            friend bool operator<=(const Fraction& left,
                                   const Fraction& right);
            friend bool operator>=(const Fraction& left,
                                   const Fraction& right);
            friend bool operator>(const Fraction& left,
                                  const Fraction& right);
            friend bool operator==(const Fraction& left,
                                   const Fraction& right);
            friend bool operator!=(const Fraction& left,
                                   const Fraction& right);
            Fraction operator+=(const Fraction& right);
            Fraction operator-=(const Fraction& right);
            Fraction operator*=(const Fraction& right);
            Fraction operator/=(const Fraction& right);
            Fraction operator++();
            Fraction operator++(int);
            Fraction operator--();
            Fraction operator--(int);

        private:
            void simplify();
            int numValue;
            int denValue;
    };
}

#endif
