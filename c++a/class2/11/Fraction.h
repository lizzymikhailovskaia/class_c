
#include <iostream>
#include <string>
using namespace std;

namespace cs2b_fraction{

class fraction{
private:
   int num;
   int den;

   void simplify(){
       if (this->den<0) {               // if denominator is negative multiply both numerator and deno by -1.
           this->num=-this->num;
           this->den=-this->den;
       }
       int max=abs(this->num)>abs(this->den)?abs(this->num):abs(this->den); // find the max by applying abs function incase either part of fractions are negative.
       bool divided=false;
       for(int i=2;i<=max;i++){       // divide the num and deno from factor 2 till max out of two. If divided set the bool var to true.
           if(((this->num%i)==0) && ((this->den%i)==0)){
               this->num=this->num/i;
               this->den=this->den/i;
               divided=true;
           }
       }
       if (divided) simplify();       // call the simplfy method again incase the number are divided
   }

public:
   //Construction of a fraction from two, one, or zero integer arguments. If two arguments, they are assumed to be the numerator and
   //denominator, just one is assumed to be a whole number, and zero arguments creates a zero fraction.
   //Use default parameters so that you only need a single function to implement all three of these constructors.
   fraction(int num=0, int den=1){
       this->den = (den!=0)?den:1;
       this->num = num;
       this->simplify();
   }
   //Printing a fraction to a stream with an overloaded << operator.
   friend ostream& operator<<(ostream& out, const fraction& obj){
       int r=abs(obj.num%obj.den);           // calculate the absolute value of remainder between numerator and denominator
       int no;
       if(obj.den==1 || obj.num == 0) { // Print numerator incase numerator is 0 or denominator is 1
           out << obj.num;
       }
       else if (abs(obj.den)>abs(obj.num)){       // Incase deno > num and num>0 then
           out<<obj.num<<"/"<<obj.den;               // Print the fraction as it is.
       }
       else if (obj.num<0){           // Incase of numerator is less than 0 i.e. -ve
           // else if num is -ve then set num = remainder of deno and nume
           r=obj.den-r; // subtract absolute value of remainder from deno and set it as numerator;
           no=-((abs(obj.num)+r)/obj.den);   // set the first part by adding the new numerator + -nve numeartor and divide it by deno.
           out << no <<"+"<<r<<"/"<<obj.den;
       }
       else {           // Incase num > deno and num>0 then
           int no=((obj.num-r)/obj.den);   // first part is remainder + existing numerator / divided by deno.
           out << no <<"+"<<r<<"/"<<obj.den;
       }
       return out;

   }
   //Read the fraction data from input stream
   friend istream& operator>>(istream& in, fraction& r)
   {
       int num, den,n=0;
       // Read the top
       in >> num;
       // If there is a '+', read the next number
       char c;
       in >> c;
       if (c == '+'){
       in >> n;
       den=num;
       num=n;
       n=den;
       in >> c;
       }
       if (c == '/')
       in >> den;
       else
       {
           in.putback(c);
           den = 1;
       }
       num=(den*n)+num;
       r = fraction(num, den);
       return in;
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
       simplify();
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

}
