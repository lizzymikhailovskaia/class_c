// Lizzy (Elizaveta) Mikhailovskaia, CS 110B-Programming Fundamentals: C++-831 and 832
// Date: 09-15-2017,    Instructor: Harden David

// Write a program that reads five cards from the user,
//then analyzes the cards and prints out the category of hand that they represent.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* userInput(int cards[]);
bool containsPair(const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
bool containsStraight(const int hand[]);
bool containsFullHouse(const int hand[]);
bool containsFourOfaKind(const int hand[]);
int numOfOccurrences(int number, const int hand[]);
bool containsSequenceStartingWith(int number, const int hand[]);

const int CARDS_NUM = 5;
const int MAX_CARD_VALUE = 9;

int main() {
    int cards[5];
    userInput(cards);

    if (containsFullHouse(cards))
        cout << "Full House!" << endl;

    else if (containsFourOfaKind(cards))
        cout << "Four of a kind!" << endl;

    else if (containsThreeOfaKind(cards))
        cout << "Three of a kind!" << endl;

    else if (containsTwoPair(cards))
        cout << "Two Pair!" << endl;

    else if (containsPair(cards))
        cout << "Pair!" << endl;

    else if (containsStraight(cards))
        cout << "Straight!" << endl;

    else
        cout << "High Card!" << endl;

    return 0;
}






//This function plays one time of asking the number  between 2 and 9.
int* userInput(int cards[]) {
    cout << "Enter five numeric cards, no face cards. Use 2 - 9: " << endl;
    for (int i = 0; i < CARDS_NUM; i++) {
        cout << "Card " << i + 1 << " : ";
        cin >> cards[i];
    }
    return 0;
}






// This function  return bool, true if Two of the cards in array are identical, false if not.
bool containsPair(const int hand[]) {
    for (int i = 0; i < CARDS_NUM; i++) {
        if (numOfOccurrences(hand[i], hand) == 2)
            return true;
    }
    return false;
}






// This function  return bool, true if Two different pairs, false if not.
bool containsTwoPair(const int hand[]) {
    int lastPair = 0;
    for (int i = 0; i < CARDS_NUM; i++) {
        if (lastPair != hand[i] && numOfOccurrences(hand[i], hand) == 2) {
            if (lastPair != 0)
                return true;
            lastPair = hand[i];
        }
    }
    return false;
}






// This function return bool, true if Three matching cards    false if not.
bool containsThreeOfaKind(const int hand[]) {
    for (int i = 0; i < CARDS_NUM; i ++) {
        if (numOfOccurrences(hand[i], hand) == 3)
            return true;
    }
    return false;
}






// This function  return bool, true if  5 consecutive cards, false if not
bool containsStraight(const int hand[]) {
    for (int i = 0; i < CARDS_NUM; i ++) {
        if (hand[i] <= MAX_CARD_VALUE - CARDS_NUM + 1) {
            if (containsSequenceStartingWith(hand[i], hand))
                return true;
        }
    }
    return false;
}






// This function  check if in arrays of cards exists a seqquence of cards starting with the passed card.
bool containsSequenceStartingWith(int number, const int hand[]) {
    int sequence = 1;
    for (int j = number + 1; j <= number + CARDS_NUM - 1; j++) {
        if (numOfOccurrences(j, hand) == 1)
            sequence++;
    }
    if (sequence == 5)
        return true;

    return false;
}






// This function  return bool, true if A pair and three of a kind, false if not.
bool containsFullHouse(const int hand[]) {
    return containsPair(hand) && containsThreeOfaKind(hand);
}






// This function  return bool, true if Four matching cards, false if not.
bool containsFourOfaKind(const int hand[]) {
    for (int i = 0; i < CARDS_NUM; i ++) {
        if (numOfOccurrences(hand[i], hand) == 4)
            return true;
    }
    return false;
}






// This function  tells how many times int number meets in array
int numOfOccurrences(int number, const int hand[]) {
    int occurrences = 0;
    for (int i = 0; i < CARDS_NUM; i++) {
        if (number == hand[i])
            occurrences ++;
    }
    return occurrences;
}

// output:
/*
lizzy@Lizzys-MacBook-Pro  ~/class_c/class2   master ●  g++ -o output a4_1.cpp  && ./output
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 1
Card 2 : 1
Card 3 : 2
Card 4 : 3
Card 5 : 4
Pair!
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 1
Card 2 : 1
Card 3 : 2
Card 4 : 2
Card 5 : 3
Two Pair!
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 1
Card 2 : 2
Card 3 : 3
Card 4 : 4
Card 5 : 5
Straight!
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 1
Card 2 : 1
Card 3 : 1
Card 4 : 2
Card 5 : 3
Three of a kind!
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 1
Card 2 : 1
Card 3 : 1
Card 4 : 2
Card 5 : 2
Full House!
Enter five numeric cards, no face cards. Use 2 - 9:
Card 1 : 6
Card 2 : 7
Card 3 : 1
Card 4 : 2
Card 5 : 3
High Card!
*/
