/*Question 6:
 *Write a program that asks the user to input a positive integer n, and print all of the numbers
 *from 1 to n that have more even digits than odd digits. */

#include <iostream>
using namespace std;

int main() {

    int inputInt;
    int oddCount;
    int evenCount;
    int currInt;
    int parityCalcInt;

    cout << "Please enter a positive integer: ";
    cin >> inputInt;

    // For all digits 1 to inputInt
    for (currInt = 1; currInt <= inputInt; currInt +=1){
        // Calculate parity of each digit (starting with ones) and repeat on digit to the left
        // until no digits remaining
        for(parityCalcInt = currInt, evenCount = 0, oddCount =0; parityCalcInt > 0; parityCalcInt /= 10) {
            if (parityCalcInt % 2 == 0)
                evenCount += 1;
            else
                oddCount += 1;
        }
        // Compare the number of even digits to the number of odd digits, and print if more even digits than odd digits
        if (evenCount > oddCount)
            cout << currInt << endl;
        else
            continue;
    }

    return 0;
}
