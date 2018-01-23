
#ifndef fraction_H
#define fraction_H

/*The Fraction class can be used to represent numbers that can be expressed as
the ratio of two integers, that is, rational numbers or "Fraction". */

class Fraction
{
    public:
      Fraction();
      Fraction(int,int);
      void print() const;
      Fraction multipliedBy(Fraction) const;
      Fraction dividedBy(Fraction);
      Fraction addedTo(Fraction &);
      Fraction subtract(Fraction &);
      bool isEqualTo(Fraction &) const;
      void simplify();

    private:
      int num;
      int denom;
};
#endif
