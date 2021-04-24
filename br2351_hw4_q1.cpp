/* Question 1
 * Write two versions of a program that reads a positive integer n, and prints the first n even numbers. a) In
 * the first, use a while loop. b) In the second, use a for loop. */

#include <iostream>
using namespace std;

int main() {
    int inputInteger;
    int counter;


    cout << "section a" << endl;
    cout << "Please enter a positive integer: ";
    cin >> inputInteger;

    counter = 1;
    while (counter <= inputInteger) {
        cout << 2 * counter << endl;
        counter += 1;
    }

    cout << "section b" << endl;
    cout << "Please enter a positive integer: ";
    cin >> inputInteger;

    for (counter = 1; counter <= inputInteger; counter+= 1) {
        cout << 2 * counter << endl;
    }

    return 0;
}
