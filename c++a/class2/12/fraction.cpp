#include "Fraction.h"
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;
using namespace cs_Fraction;

    Fraction::Fraction()
    {
        numValue = 0;
        denValue = 1;
    }

    Fraction::Fraction(int whole)
    {
        numValue = whole;
        denValue = 1;
    }


    Fraction::Fraction(int num, int den)
    {
        assert(den != 0);
        numValue = num;
        denValue = den;
        this->simplify();
    }


    Fraction operator+(const Fraction& left, const Fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denValue * right.denValue;
        modNum1 = left.numValue * right.denValue;
        modNum2 = right.numValue * left.denValue;

        Fraction result = Fraction(modNum1 + modNum2, modDen);
        result.simplify();
        return result;
    }


    Fraction operator-(const Fraction& left, const Fraction& right)
    {
        int modNum1;
        int modNum2;
        int modDen;

        modDen = left.denValue * right.denValue;
        modNum1 = left.numValue * right.denValue;
        modNum2 = right.numValue * left.denValue;

        Fraction result = Fraction(modNum1 - modNum2, modDen);
        result.simplify();
        return result;
    }


    Fraction operator*(const Fraction& left, const Fraction& right)
    {
        Fraction result = Fraction(left.numValue * right.numValue, left.denValue * right.denValue);
        result.simplify();
        return result;
    }


    Fraction operator/(const Fraction& left, const Fraction& right)
    {
        Fraction result = Fraction(left.numValue * right.denValue, left.denValue * right.numValue);
        result.simplify();
        return result;
    }


    ostream& operator<<(ostream& out, const Fraction &f)
    {
        if(abs(f.numValue) > f.denValue)
        {
            out << ((f.numValue - f.numValue % f.denValue) / f.denValue);

            if(f.numValue % f.denValue != 0)
            {
                cout << "+" << abs(f.numValue % f.denValue) << "/" << f.denValue;
            }
        }
        else if(f.numValue == f.denValue)
        {
            out << f.numValue;
        }
        else if(f.numValue == 0)
        {
            cout << 0;
        }
        else
        {
            cout << f.numValue << "/" << f.denValue;
        }

        return out;
    }


//Takes user input of mixed numbers, negative numbers, whole numbers or fractions
//and stores them in fraction f.
    istream& operator>>(istream& in, Fraction &f)
    {
        int temp;
        in >> temp;
        if (in.peek() == '+')
        {
            in.ignore();
            in >> f.numValue;
            in.ignore();
            in >> f.denValue;
            if(temp < 0)
            {
                temp *= -1;
                f.numValue += temp * f.denValue;
                f.numValue *= -1;
            }
            else
            {
                f.numValue += temp * f.denValue;
            }
        }
        else if (in.peek() == '/')
        {
            in.ignore();
            in >> f.denValue;
            f.numValue = temp;
        }
        else
        {
            f.numValue = temp;
            f.denValue = 1;
        }

        f.simplify();
        return in;
    }


    bool operator<(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue < right.numValue * left.denValue)
            return true;
        else
            return false;
    }


    bool operator<=(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue <= right.numValue * left.denValue)
            return true;
        else
            return false;
    }


    bool operator>(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue > right.numValue * left.denValue)
            return true;
        else
            return false;
    }


    bool operator>=(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue >= right.numValue * left.denValue)
            return true;
        else
            return false;
    }

    bool operator==(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue == right.numValue * left.denValue)
            return true;
        else
            return false;
    }


    bool operator!=(const Fraction& left, const Fraction& right)
    {
        if(left.numValue * right.denValue != right.numValue * left.denValue)
            return true;
        else
            return false;
    }


    Fraction Fraction::operator+=(const Fraction& right)
    {
        *this = *this + right;

        return *this;
    }


    Fraction Fraction::operator-=(const Fraction& right)
    {
        *this = *this - right;

        return *this;
    }


    Fraction Fraction::operator*=(const Fraction& right)
    {
        *this = *this * right;

        return *this;
    }


    Fraction Fraction::operator/=(const Fraction& right)
    {
        *this = *this / right;

        return *this;
    }


    Fraction Fraction::operator++()
    {
        numValue += denValue;
        return *this;
    }


    Fraction Fraction::operator++(int)
    {
        Fraction temp(numValue, denValue);
        numValue += denValue;
        return temp;
    }


    Fraction Fraction::operator--()
    {
        numValue -= denValue;
        return *this;
    }


    Fraction Fraction::operator--(int)
    {
        Fraction temp(numValue, denValue);
        numValue -= denValue;
        return temp;
    }

//simplifies the calling fraction.
    void Fraction::simplify()
    {
        for (int i = denValue; i > 1; i--)
        {

            if ((numValue % i == 0) && (denValue % i == 0)) {

                numValue = numValue / i;
                denValue = denValue / i;
            }
        }
        if(denValue < 0)
        {
            denValue *= -1;
            numValue *= -1;
        }
    }
}
