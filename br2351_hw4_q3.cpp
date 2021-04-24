/* Question 3:
 * Write a program that reads from the user a positive integer (in a decimal representation),
 * and prints its binary (base 2) representation.*/

#include <iostream>
using namespace std;

int main() {
    int inputInt;
    int logCalc;
    int log2Int, exponent, cursorPos;
    int twoExpLog2;
    int remainderInt;

    cout << "Enter decimal number:" << endl;
    cin >> inputInt;
    cout << "The binary representation of " << inputInt << " is ";

    remainderInt = inputInt;
    cursorPos = 0;
    while (remainderInt > 0){
        // Calculate integer value of the remainder represented as 2^x, where x = log2Int(remainderInt). Value of log2Int is
        // calculated by incrementing after every division operation until remainder no longer divisible by 2. The
        // resulting 'log2Int' is an integer value.
        for (logCalc = remainderInt, log2Int = 0; logCalc > 1; log2Int += 1) {
            logCalc /= 2;
        }

        // This segment only activates starting from the 2nd iteration: cursorPos represents the previous value of
        // log2Int(remainderInt). The cursorPos is moved to right until reaching the current 2^x bit, printing a zero
        // each time but leaving a space at the end to print the 1 in the correct bit.
        // (i.e. number of zeroes to print equals log2Int(remainder1) - (log2Int(remainder2) + 1))
        while (cursorPos > log2Int + 1){
            cout << "0";
            cursorPos -= 1;
        }

        // Print 1 for current 2^x bit
        cout << 1;
        // After printing the 1, cursorPos is equal to value of log2Int (number of bits remaining to the right of the 1)
        cursorPos = log2Int;

        // Calculate value of 2^log2Int (e.g. 2^6 results in 64, the value to be subtracted from remainderInt)
        for (exponent = log2Int, twoExpLog2 = 1; exponent > 0; exponent -=1)
            twoExpLog2 *= 2;

        // Reassign remainderInt for purposes of the next loop iteration (e.g. "76 - 64" = 12)
        remainderInt = remainderInt - twoExpLog2;
    }

    // Print remaining zeroes to screen when remainderInt = 0 and log2Int > 0
    while (cursorPos > 0) {
        cout << 0;
        cursorPos -= 1;
    }

    // Finalize output and print 0 to screen in the case user entered 0 as input
    if (inputInt == 0)
        cout << 0 << endl;
    else
        cout << endl;


    return 0;
}
