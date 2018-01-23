#ifndef myString_H
#define myString_H

#include <iostream>

using namespace std;

namespace cs_myString {

    class myString {

    public:

        //DEFAULT CONSTRUCTOR

        myString();
        //Preconditon: Takes no parameter and return nothing..not even void
        //Postcondition: initialize data member-'desc' with memory of size 1 and copy empty string to it



        //CONSTRUCTOR

        myString(const char *inDesc);
        //Preconditon: Takes one argument - pointer to char object 'inDesc' and is kept const
        //Postcondition: object is created with size accordingly with specified object pointer given at input



        //COPY CONSTRUCTOR

        myString(const myString& right);
        //Preconditon: Takes one argument - reference to myString object 'right' and is kept const
        //Postcondition: object is created with size accordingly with specified object reference given at input



        //DESTRUCTOR

        ~myString();
        //Preconditon: an myString object exist with valid length
        //Postcondition: myString object is destroyed



        //ASSIGNMENT OPERATOR

        myString operator=(const myString& right);
        //Preconditon: Input argument contains address to myString object:-Right.
        //Postcondition: object is copied with size accordingly with specified object reference given at input



        // CONCAT/ASSIGNMENT OPERATOR

        myString operator+=(const myString& right);
        //Preconditon: Input argument contains address to myString object:-Right.
        //Postcondition: returns pointer to this object which was created by combination of concatenation and assignment operator



        myString operator+=(const char *right);
        //Preconditon: Input argument contains pointer to char object:-Right.
        //Postcondition: returns pointer to this char object which was created by combination of concatenation and assignment operator

        int length() const;
        //Preconditon: length donot take any argument
        //Postcondition: returns length of myString object

        // OVERLOADING THE EXTRACTION OPERATOR

        friend ostream& operator<<(ostream& out, const myString& source);
        //Precondition: The out of ostream object is waiting to receive the myString output.
        //Postcondition: myString source has been passed by reference to the ostream out and is kept const.

        //OVERLOADED INSERTION OPERATOR

        friend istream& operator>>(istream& in, myString &source);
        //Precondition: The in of istream object is waiting to receive the myString input.
        //Postcondition: myString source has been passed by reference into the istream 'in'.

        //OVERLOADED All SIX OF THE RELATIONAL OPERATOR (<, <=, >, >=, ==, !=)

        friend bool operator<(const myString &Left, const myString &Right);
        //Precondition:- Input argument contains address to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left < Right, else it return's false.

        friend bool operator<=(const myString &Left, const myString &Right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left <= Right, else it return's false.

        friend bool operator==(const myString &Left, const myString &Right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left == Right, else it return's false.

        friend bool operator!=(const myString &Left, const myString &Right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left != Right, else it return's false.

        friend bool operator>=(const myString &Left, const myString &Right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left >= Right, else it return's false.

        friend bool operator>(const myString &Left, const myString &Right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's true, if Left > Right, else it return's false.

        //READ FROM FILE

        void read(istream& inString,char delim);
        //Preconditon: Input argument contains two argument, a stream and the delimiting character.
        //Postcondition: Reads character by character in a loop. Use the in.getline() function to do the reading of the input into a non-dynamic array, then use strcpy() to copy it into your data member. return void.

        //CONCAT OPERATOR

        friend const myString operator+(const myString &left, const myString &right);
        //Precondition:- Input parameters contains reference to two myString object:- Left and Right.
        //Postcondition: function return's addition of two myString objects.


        // OVERLOADING THE SQUARE BRACKETS

        char operator[](int index) const;
        //Preconditon: Input argument contains value of index.
        //Postcondition: Returns the index to myString specifying the char to that location which is const.


        char& operator[](int index);
        //Preconditon: Input argument contains value of index.
        //Postcondition: Returns the index to myString specifying the char to that location.



    private:

        char *desc; //POINTER DATA MEMBER

    };


}
#endif
