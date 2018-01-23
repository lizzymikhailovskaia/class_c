myString.cpp

#include<iostream>
#include <cassert>
#include "myString.h"

using namespace std;


namespace cs_myString {

/*Default construtor takes no parameter : initialize desc with memory of size 1 and copy empty string to it.*/

    MyString::MyString() {

        desc = new char[1];
        strcpy(desc, "");
    }
/*The parameterized constructor takes pointer argument pointing to the object. First create space to copy object to at 'desc' a private member data. and then copy to destination. The memory created is equal to object length + 1.*/

    MyString::MyString(const char *inDesc) {

        desc = new char[strlen(inDesc) + 1];
        strcpy(desc, inDesc);
    }
/*The parameterized construtor takes one reference parameter the address to the object location. First create space to copy object to at 'desc' a private member data. and then copy to destination. The memory created is equal to object length + 1.*/

    MyString::MyString(const myString& right) {

        desc = new char[strlen(right.desc) + 1];
        strcpy(desc, right.desc);
    }
//Destructor is written to destroy object of whatever length

    MyString::~MyString() {

        delete [] desc;
    }
/* The overloaded operator = , takes one argument reference to object and is kept const. first we free memory of private data member desc, then assign memory of appropriate length according to size of object reference. Later copy object of specified length to private data member and return pointer to object. */


    MyString MyString::operator=(const MyString& right) {

        if (this != &right) {

            delete [] desc;
            desc = new char[strlen(right.desc) + 1];
            strcpy(desc, right.desc);
        }

        return *this;
    }
/*Overloaded operator == function contains addresses of two valid myString:- left and right. strcmp function compares. It return's true, on when left.desc and right.desc == 0*/

    bool operator==(const myString& left, const myString& right) {

        return strcmp(left.desc, right.desc) == 0;
    }
   /*Overloaded operator < function contains addresses of two valid myString:- left and right. strcmp function compares. It return's true, on when left.desc and right.desc < 0*/

    bool operator<(const myString& left, const myString& right) {

        return strcmp(left.desc, right.desc) < 0;
    }
/*Overloaded operator != function contains addresses of two valid myString:- left and right. It return's true, on when left is not equal right */

    bool operator!=(const myString& left, const myString& right) {

        return !(left == right);
    }
/*Overloaded operator > function contains addresses of two valid myString:- left and right. It return's true, on when left is not equal right and is not less than right*/

    bool operator>(const myString& left, const myString& right) {

        return !(left == right) && !(left < right);
    }
/*Overloaded operator <= function contains addresses of two valid myString:- left and right. It return's true, on when left is less than right or equals to right*/

    bool operator<=(const myString& left, const myString& right) {

        return left < right || left == right;
    }
/*Overloaded operator >= function contains addresses of two valid myString:- left and right. It return's true, on when left is not less than right*/

    bool operator>=(const myString& left, const myString& right) {

        return !(left < right);
    }
// return length of string in int
    int MyString::length() const {

            return (int) strlen(desc);
    }
/*Overloaded operator << function takes computed address of source and is passed to out object of ostream to display results.*/

    ostream& operator<<(ostream& out, const myString& source) {

        out << source.desc;
        return out;
    }
/* Overloading The Square Brackets returns a const char for the index returned. Its operator takes index and use assert to check whether the index falls is >= 0 and index is < string length. If it does then return the index to myString specifying the char to that index.*/

    char MyString::operator[](int index) const {

        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }
    /* Overloading The Square Brackets returns an reference to char at that index. Its operator takes index and use assert to check whether the index falls is >= 0 and index is < string length. If it does then return the index to myString.*/
    char& MyString::operator[](int index) {

        assert(index >= 0 && index < strlen(desc));
        return desc[index];
    }
    /* Overloaded Extraction >> operator function takes address of source. A limit of 127 on the number of characters this function will read.We temporarily read into a non-dynamic array and then copy it into your data member, which will be a dynamic array. */
    istream& operator>>(istream& in, myString &source)
    {

        char temp[127];
        delete [] source.desc;
        in >> temp;
        source.desc = new char[strlen(temp) + 1 ];
        strcpy(source.desc, temp);
        return in;
    }
    /* The read() function returns void and takes two arguments, a stream and the delimiting character. It does not skip leading spaces. The limit of 127 characters imposed on the >> function above also applies to this function. The function :-reads character by character in a loop. Use the in.getline() function to do the reading of the input into a non-dynamic array, then use strcpy() to copy it into your data member.
     */

    void MyString::read(istream &source, char delim)
    {
        char temp[127];
        delete [] desc;
        source.getline(temp,127,delim);
        desc = new char[strlen(temp) + 1 ];
        strcpy(desc,temp);
    }
    /*Overloaded operator + function, takes two parameter which is reference to myString 'left' & 'right' and is declared const. Overload the + operator does myString concatenation. The operator able to handle either myString objects or C-strings on either side of the operator. The memory is allocated to hold the new myString. strcpy() gets the left operand into the result myString, and then strcat() to append the right operand. Both strcpy() and strcat() is used as if they are void, even though they do have return values.
     */
    const MyString operator+(const myString &left, const myString &right)
    {

        MyString temp;
        temp = new char[strlen(left.desc) + strlen(right.desc) + 1];
        strcpy(temp.desc, left.desc);
        strcat(temp.desc, right.desc);
        return temp;
    }
    /* Overloaded the shorthand += to combine concatenation and assignment. The argument to overloaded += operator is reference
     to right myString object. Dynamic allocate memory to hold size of the new myString and strcat() to append the right operand.
     */
    MyString MyString::operator+=(const MyString& right)
    {

        MyString temp;
        temp = new char[strlen(right.desc) + 1];
        delete [] desc;
        desc = new char[strlen(temp.desc) + strlen(right.desc) + 1];
        strcat(desc, right.desc);
        return *this;

    }
    /* Overloaded the shorthand += to combine concatenation and assignment. The argument to overloaded += operator is pointer
     to right char object. Dynamic allocate memory to hold the size of the new myString and strcat() to append the right operand.
     */
    MyString myString::operator+=(const char *right)
    {
        MyString temp;
        temp = new char[strlen(right) + 1];
        delete [] desc;
        desc = new char[strlen(temp.desc) + strlen(right) + 1];
        strcat(desc, right);
        return *this;
    }
}
