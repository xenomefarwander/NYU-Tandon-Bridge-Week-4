/*Question 5:
 * Write a program that asks the user to input a positive integer n, and prints a textual image of an
 * hourglass made of 2n lines with asterisks. */

#include <iostream>
using namespace std;

int main() {

    int inputInt, linesRemaining, numOfSpaces, numOfStars;
    int lineCount;

    cout << "Please enter a positive integer: ";
    cin >> inputInt;

    // Top of pyramid and connector star in middle
    for (linesRemaining = inputInt, lineCount = 1; linesRemaining > 0; linesRemaining -= 1, lineCount +=1){
        for (numOfSpaces = (lineCount - 1); numOfSpaces > 0; numOfSpaces -= 1) {
            cout << " ";
        }
        for (numOfStars = (2 * linesRemaining) - 1; numOfStars > 0; numOfStars -= 1) {
            cout << "*";
        }
        for (numOfSpaces = (lineCount - 1); numOfSpaces > 0; numOfSpaces -= 1) {
            cout << " ";
        }
        cout << endl;
    }
    // Bottom of pyramid
    for (linesRemaining = inputInt - 1, lineCount = 2; linesRemaining > 0; linesRemaining -= 1, lineCount += 1){
        for (numOfSpaces = (linesRemaining -1); numOfSpaces > 0; numOfSpaces -= 1)
            cout << " ";
        for (numOfStars = (2 * lineCount) - 1; numOfStars > 0; numOfStars -= 1)
            cout << "*";
        for (numOfSpaces = (linesRemaining -1); numOfSpaces > 0; numOfSpaces -= 1)
            cout << " ";
        cout << endl;
    }


    return 0;
}
