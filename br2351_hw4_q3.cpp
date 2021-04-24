/* Question 3:
 * Write a program that reads from the user a positive integer (in a decimal representation),
 * and prints its binary (base 2) representation.*/

#include <iostream>
using namespace std;

int main() {
    int inputInt;
    int logCalc;
    int log2, exponent, cursorPos;
    int twoExpLog2;
    int remainder;

    cout << "Enter decimal number:" << endl;
    cin >> inputInt;
    cout << "The binary representation of " << inputInt << " is ";

    remainder = inputInt;
    cursorPos = 0;
    while (remainder > 0){
        // Calculate integer value of the remainder represented as 2^x, where x = log2(remainder). Value of log2 is
        // calculated by incrementing after every division operation until remainder no longer divisible by 2. The
        // resulting 'log2' is an integer value.
        for (logCalc = remainder, log2 = 0; logCalc > 1; log2 += 1) {
            logCalc /= 2;
        }

        // This segment only activates starting from the 2nd iteration: cursorPos represents the previous value of
        // log2(remainder). The cursorPos is moved to right until reaching the current value of 2^x, printing a zero
        // each time but leaving a space at the end to print the 1.
        // (i.e. number of zeroes to print equals log2(remainder1) - (log2(remainder2) + 1))
        while (cursorPos > log2 + 1){
            cout << "0";
            cursorPos -= 1;
        }

        // Print 1 for current remainder bit
        cout << 1;
        // After printing the 1, cursorPos is equal to value of log2 (number of bits remaining to the right of the 1)
        cursorPos = log2;

        // Calculate value of 2^log2, (value to be subtracted from remainder, e.g. 2^6 results in 64)
        for (exponent = log2, twoExpLog2 = 1; exponent > 0; exponent -=1)
            twoExpLog2 *= 2;

        // Reassign remainder for purposes of the next loop iteration (e.g. "76 - 64" = 12)
        remainder = remainder - twoExpLog2;
    }

    // Print remaining zeroes to screen when remainder = 0 and log2 > 0
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
