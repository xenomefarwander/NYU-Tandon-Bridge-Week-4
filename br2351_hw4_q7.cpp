/* Question 7:
 * Write a program that reads a positive integer n from the user and prints out a nxn
 * multiplication table. The columns should be spaced by a tab. */

#include <iostream>
using namespace std;

int main() {

    int inputInt;
    int rowCount;
    int columnCount;

    cout << "Please enter a positive integer:" << endl;
    cin >> inputInt;

    for(rowCount = 1; rowCount <= inputInt; rowCount += 1){
        for(columnCount = 1; columnCount <= inputInt; columnCount += 1){
            cout << rowCount * columnCount << "\t";
        }
        cout << endl;
    }

    return 0;
}
