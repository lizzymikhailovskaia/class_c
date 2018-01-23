/*
    Lizzy Mikhailovskaia
    Dave Harden
    11/05/17
    CS 110B
    Assignment 11.1
*/
#include <iostream>
#include <string>
using namespace std;

class fraction {
    private:
        int num;
        int den;

    public:
//Construction of a fraction from two, one, or zero integer arguments. If two arguments, they are assumed to be the numerator and
//denominator, just one is assumed to be a whole number, and zero arguments creates a zero fraction.
//Use default parameters so that you only need a single function to implement all three of these constructors.
fraction(int num=0, int den=1){
    this->den = (den!=0)?den:1;
    this->num = num;
}






//Printing a fraction to a stream with an overloaded << operator.
friend ostream& operator<<(ostream& out, const fraction& obj){
    out << obj.num << "/" << obj.den;
    return out;
}






//All six of the relational operators (<, <=, >, >=, ==, !=) should be supported.
//They should be able to compare fractions to other fractions as well as fractions to integers.
//Either fractions or integers can appear on either side of the binary comparison operator.
//You should only use one function for each operator.
friend bool operator<(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den<obj.den*obj2.num);
}






friend bool operator<=(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den<=obj.den*obj2.num);
}






friend bool operator>(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den>obj.den*obj2.num);
}






friend bool operator>=(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den>=obj.den*obj2.num);
}





friend bool operator==(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den==obj.den*obj2.num);
}





friend bool operator!=(const fraction& obj,const fraction& obj2){
    return (obj.num*obj2.den!=obj.den*obj2.num);
}





//The four basic arithmetic operations (+, -, *, /) should be supported.
//Again, they should allow fractions to be combined with other fractions, as well as with integers.
//Either fractions or integers can appear on either side of the binary operator.
//Only use one function for each operator.
friend fraction operator+(const fraction& obj,const fraction& obj2){
    return fraction(obj.num*obj2.den+obj.den*obj2.num, obj.den*obj2.den);
}





friend fraction operator-(const fraction& obj,const fraction& obj2){
    return fraction(obj.num*obj2.den-obj.den*obj2.num, obj.den*obj2.den);
}





friend fraction operator*(const fraction& obj,const fraction& obj2){
    return fraction(obj.num*obj2.num, obj.den*obj2.den);
}





friend fraction operator/(const fraction& obj,const fraction& obj2){
    return fraction(obj.num*obj2.den,obj.den*obj2.num);
}





//The shorthand arithmetic assignment operators (+=, -=, *=, /=) should also be implemented.
//fractions can appear on the left-hand side, and fractions or integers on the right-hand side.
fraction& operator+=(const fraction& obj){
    *this = *this+obj;
    return *this;
}






fraction& operator-=(const fraction& obj){
    *this = *this-obj;
    return *this;
}






fraction& operator*=(const fraction& obj){
    *this = *this*obj;
    return *this;
}






fraction& operator/=(const fraction& obj){
    *this = *this/obj;
    return *this;
}






//The increment and decrement (++, --) operators should be supported in both prefix and postfix form for fractions.
//To increment or decrement a fraction means to add or subtract (respectively) one (1).
fraction& operator++(){
    *this +=1;
    return *this;
}






fraction& operator--(){
    *this -=1;
    return *this;
}






fraction operator++(int k){
    fraction local(*this);
        ++(*this);
    return local;
}






fraction operator--(int k){
    fraction local(*this);
        --(*this);
    return local;
}
};






void BasicTest();
void RelationTest();
void BinaryMathTest();
void MathAssignTest();
string boolString(bool convertMe);

int main()
{
    BasicTest();
    RelationTest();
    BinaryMathTest();
    MathAssignTest();
}





void BasicTest()
{
    cout << "\n----- Testing basic fraction creation & printing\n";
    const fraction fr[] = {fraction(4, 8), fraction(-15,21),
                           fraction(10), fraction(12, -3),
                           fraction(), fraction(28, 6), fraction(0, 12)};
    for (int i = 0; i < 7; i++){
        cout << "fraction [" << i <<"] = " << fr[i] << endl;
    }
}






string boolString(bool convertMe) {
        if (convertMe) {
                return "true";
        } else {
                return "false";
        }
}






void RelationTest()
{
    cout << "\n----- Testing relational operators between fractions\n";
    const fraction fr[] = {fraction(3, 6), fraction(1,2), fraction(-15,30),
                            fraction(1,10), fraction(0,1), fraction(0,2)};
    for (int i = 0; i < 5; i++) {
          cout << "Comparing " << fr[i] << " to " << fr[i+1] << endl;
          cout << "\tIs left < right? " << boolString(fr[i] < fr[i+1]) << endl;
          cout << "\tIs left <= right? " << boolString(fr[i] <= fr[i+1]) << endl;
          cout << "\tIs left > right? " << boolString(fr[i] > fr[i+1]) << endl;
          cout << "\tIs left >= right? " << boolString(fr[i] >= fr[i+1]) << endl;
          cout << "\tDoes left == right? " << boolString(fr[i] == fr[i+1]) << endl;
          cout << "\tDoes left != right ? " << boolString(fr[i] != fr[i+1]) << endl;
    }
    cout << "\n----- Testing relations between fractions and integers\n";
    fraction f(-3,6);
    int num = 2;
    cout << "Comparing " << f << " to " << num << endl;
    cout << "\tIs left < right? " << boolString(f < num) << endl;
    cout << "\tIs left <= right? " << boolString(f <= num) << endl;
    cout << "\tIs left > right? " << boolString(f > num) << endl;
    cout << "\tIs left >= right? " << boolString(f >= num) << endl;
    cout << "\tDoes left == right? " << boolString(f == num) << endl;
    cout << "\tDoes left != right ? " << boolString(f != num) << endl;
    fraction g(1,4);
    num = -3;
    cout << "Comparing " << num << " to " << g << endl;
    cout << "\tIs left < right? " << boolString(num < g) << endl;
    cout << "\tIs left <= right? " << boolString(num <= g) << endl;
    cout << "\tIs left > right? " << boolString(num > g) << endl;
    cout << "\tIs left >= right? " << boolString(num >= g) << endl;
    cout << "\tDoes left == right? " << boolString(num == g) << endl;
    cout << "\tDoes left != right ? " << boolString(num != g) << endl;
}






void BinaryMathTest()
{
    cout << "\n----- Testing binary arithmetic between fractions\n";
    const fraction fr[] = {fraction(1, 6), fraction(1,3),
                           fraction(-2,3), fraction(5), fraction(-4,3)};
    for (int i = 0; i < 4; i++) {
          cout << fr[i] << " + " << fr[i+1] << " = " << fr[i] + fr[i+1] << endl;
          cout << fr[i] << " - " << fr[i+1] << " = " << fr[i] - fr[i+1] << endl;
          cout << fr[i] << " * " << fr[i+1] << " = " << fr[i] * fr[i+1] << endl;
          cout << fr[i] << " / " << fr[i+1] << " = " << fr[i] / fr[i+1] << endl;
    }
    cout << "\n----- Testing arithmetic between fractions and integers\n";
    fraction f(-1, 2);
    int num = 4;
    cout << f << " + " << num << " = " << f + num << endl;
    cout << f << " - " << num << " = " << f - num << endl;
    cout << f << " * " << num << " = " << f * num << endl;
    cout << f << " / " << num << " = " << f / num << endl;
    fraction g(-1, 2);
    num = 3;
    cout << num << " + " << g << " = " << num + g << endl;
    cout << num << " - " << g << " = " << num - g << endl;
    cout << num << " * " << g << " = " << num * g << endl;
    cout << num << " / " << g << " = " << num / g << endl;
}






void MathAssignTest()
{
    cout << "\n----- Testing shorthand arithmetic assignment on fractions\n";
    fraction fr[] = {fraction(1, 6), fraction(4),
                     fraction(-1,2), fraction(5)};
    for (int i = 0; i < 3; i++) {
          cout << fr[i] << " += " << fr[i+1] << " = ";
          cout << (fr[i] += fr[i+1]) << endl;
          cout << fr[i] << " -= " << fr[i+1] << " = ";
          cout << (fr[i] -= fr[i+1]) << endl;
          cout << fr[i] << " *= " << fr[i+1] << " = ";
          cout << (fr[i] *= fr[i+1]) << endl;
          cout << fr[i] << " /= " << fr[i+1] << " = ";
          cout << (fr[i] /= fr[i+1]) << endl;
    }
    cout << "\n----- Testing shorthand arithmetic assignment using integers\n";
    fraction f(-1, 3);
    int num = 3;
    cout << f << " += " << num << " = ";
    cout << (f += num) << endl;
    cout << f << " -= " << num << " = ";
    cout << (f -= num) << endl;
    cout << f << " *= " << num << " = ";
    cout << (f *= num) << endl;
    cout << f << " /= " << num << " = ";
    cout << (f /= num) << endl;
    cout << "\n----- Testing increment/decrement prefix and postfix\n";
    fraction g(-1, 3);
    cout << "Now g = " << g << endl;
    cout << "g++ = " << g++ << endl;
    cout << "Now g = " << g << endl;
    cout << "++g = " << ++g << endl;
    cout << "Now g = " << g << endl;
    cout << "g-- = " << g-- << endl;
    cout << "Now g = " << g << endl;
    cout << "--g = " << --g << endl;
    cout << "Now g = " << g << endl;
}

/* lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master ●  g++ -o output a11_1.cpp   && ./output
----- Testing basic Fraction creation & printing
Fraction [0] = 4/8
Fraction [1] = -15/21
Fraction [2] = 10/1
Fraction [3] = 12/-3
Fraction [4] = 0/1
Fraction [5] = 28/6
Fraction [6] = 0/12

----- Testing relational operators between Fractions
Comparing 3/6 to 1/2
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false
Comparing 1/2 to -15/30
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
Comparing -15/30 to 1/10
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing 1/10 to 0/1
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
Comparing 0/1 to 0/2
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false

----- Testing relations between Fractions and integers
Comparing -3/6 to 2
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing -3 to 1/4
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true

----- Testing binary arithmetic between Fractions
1/6 + 1/3 = 9/18
1/6 - 1/3 = -3/18
1/6 * 1/3 = 1/18
1/6 / 1/3 = 3/6
1/3 + -2/3 = -3/9
1/3 - -2/3 = 9/9
1/3 * -2/3 = -2/9
1/3 / -2/3 = 3/-6
-2/3 + 5/1 = 13/3
-2/3 - 5/1 = -17/3
-2/3 * 5/1 = -10/3
-2/3 / 5/1 = -2/15
5/1 + -4/3 = 11/3
5/1 - -4/3 = 19/3
5/1 * -4/3 = -20/3
5/1 / -4/3 = 15/-4

----- Testing arithmetic between Fractions and integers
-1/2 + 4 = 7/2
-1/2 - 4 = -9/2
-1/2 * 4 = -4/2
-1/2 / 4 = -1/8
3 + -1/2 = 5/2
3 - -1/2 = 7/2
3 * -1/2 = -3/2
3 / -1/2 = 6/-1

----- Testing shorthand arithmetic assignment on Fractions
1/6 += 4/1 = 25/6
25/6 -= 4/1 = 1/6
1/6 *= 4/1 = 4/6
4/6 /= 4/1 = 4/24
4/1 += -1/2 = 7/2
7/2 -= -1/2 = 16/4
16/4 *= -1/2 = -16/8
-16/8 /= -1/2 = -32/-8
-1/2 += 5/1 = 9/2
9/2 -= 5/1 = -1/2
-1/2 *= 5/1 = -5/2
-5/2 /= 5/1 = -5/10

----- Testing shorthand arithmetic assignment using integers
-1/3 += 3 = 8/3
8/3 -= 3 = -1/3
-1/3 *= 3 = -3/3
-3/3 /= 3 = -3/9

----- Testing increment/decrement prefix and postfix
Now g = -1/3
g++ = -1/3
Now g = 2/3
++g = 5/3
Now g = 5/3
g-- = 5/3
Now g = 2/3
--g = -1/3
Now g = -1/3
*/
