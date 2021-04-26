/* Question 3:
 * Write a program that reads from the user a positive integer (in a decimal representation),
 * and prints its binary (base 2) representation.*/

#include <iostream>
using namespace std;

int main() {
    int inputInt;
    int logCalc;
    int log2Curr, exponent, log2Mem;
    int powOf2;
    int remainderCurr;

    cout << "Enter decimal number:" << endl;
    cin >> inputInt;
    cout << "The binary representation of " << inputInt << " is ";

    remainderCurr = inputInt;
    log2Mem = 0;
    while (remainderCurr > 0){
        // Calculate log2Curr
        for (logCalc = remainderCurr, log2Curr = 0; logCalc > 1; log2Curr += 1) {
            logCalc /= 2;
        }
        // Print residual zeroes
        while (log2Mem > log2Curr + 1){
            cout << "0";
            log2Mem -= 1;
        }
        // Print 1 for current 2^x bit and set log2Mem to current value of log2Curr
        cout << 1;
        log2Mem = log2Curr;

        // Calculate value of 2^x (e.g. 2^6 results in 64, the value to be subtracted from remainderCurr)
        for (exponent = log2Curr, powOf2 = 1; exponent > 0; exponent -=1)
            powOf2 *= 2;
        
        // Reassign remainderCurr for purposes of the next loop iteration (e.g. "76 - 64" = 12)
        remainderCurr %= powOf2;
    }

    // Print remaining zeroes to screen when remainderCurr = 0 and log2Curr > 0
    while (log2Mem > 0) {
        cout << 0;
        log2Mem -= 1;
    }

    // Finalize output and print 0 to screen in the case user entered 0 as input
    if (inputInt == 0)
        cout << 0 << endl;
    else
        cout << endl;


    return 0;
}
