/*Question 4:
* Write two versions of a program that reads a sequence of positive integers from the user,
* calculates their geometric mean, and print the geometric mean.*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int numOfInts;
    int inputInt, sumOfInts;
    int cinIndex;
    double nRoot;

    cout << "section a" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> numOfInts;
    cout << "Please enter your sequence:" << endl;

    for (cinIndex = 1, sumOfInts = 0; cinIndex <= numOfInts; cinIndex += 1) {
        cin >> inputInt;
        sumOfInts = sumOfInts + inputInt;
    }

    nRoot = 1 / (double)numOfInts;
    cout << "The geometric mean is: " << pow(sumOfInts, nRoot) << endl;


    cout << "section b" << endl;
    cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. End "
         << "your sequence by typing -1:" << endl;

    sumOfInts = 0;
    numOfInts = 0;
    while (inputInt != -1){
        cin >> inputInt;
        if (inputInt == -1)
            continue;
        else if (inputInt > 0){
            sumOfInts = sumOfInts + inputInt;
            numOfInts += 1;
        }
        else
            cout << "Invalid input" << endl;
    }

    nRoot = 1 / (double)numOfInts;
    cout << "The geometric mean is: " << pow(sumOfInts, nRoot) << endl;

    return 0;
}
