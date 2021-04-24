/*In this question we will use a simplified version of the Roman Numerals System to represent
 * positive integers.
 * The digits in this system are I, V, X, L, C, D and M. Each digit corresponds to a decimal value, as
 * showed in the following table:
 * Roman digit       I V X  L  C   D   M
 * Decimal value     1 5 10 50 100 500 1000
 * A number in the simplified Roman numerals system is a sequence of Roman digits, which follow
 * these 2 rules:
 * 1. The digits form a monotonically non-increasing sequence. That is the value of each digit is
 * less than or equal to the value of the digit that came before it.
 * For example, DLXXVI is a monotonically non-increasing sequence of Roman digits, but XIV is
 * not.
 * 2. There is no limit on the number of times that ‘M’ can appear in the number.
 * ‘D’, ‘L’ and ‘V’ can each appear at most one time in the number.
 * ‘C’, ‘X’ and ‘I’ can each appear at most four times in the number.
 * For example: IIII, XVII and MMMMMMDCCLXXXXVII are legal numbers in our simplified Roman
 * numeral system, but IIIII, XIV, VVI and CCXLIII are not.
 * Write a program that reads from the user a (decimal) number, and prints it’s representation in
 * the simplified Roman numerals system. */

#include <iostream>
using namespace std;

int main() {
    int inputInt;
    int mVal, dVal, cVal, lVal, xVal, vVal, iVal;
    int counter;

    cout << "Enter decimal number:" << endl;
    cin >> inputInt;

    if (inputInt < 1)
        cout << "Error! Invalid input. Caesar wonders, \"What is a negative number? What is zero?!\" "
             << "Hint: enter a positive integer" << endl;
    else {
        cout << inputInt << " is ";

        mVal = inputInt / 1000;
        inputInt = inputInt % 1000;
        for (counter = 1; counter <= mVal; counter += 1)
            cout << "M";

        dVal = inputInt / 500;
        inputInt = inputInt % 500;
        for (counter = 1; counter <= dVal; counter += 1)
            cout << "D";

        cVal = inputInt / 100;
        inputInt = inputInt % 100;
        for (counter = 1; counter <= cVal; counter += 1)
            cout << "C";

        lVal = inputInt / 50;
        inputInt = inputInt % 50;
        for (counter = 1; counter <= lVal; counter += 1)
            cout << "L";

        xVal = inputInt / 10;
        inputInt = inputInt % 10;
        for (counter = 1; counter <= xVal; counter += 1)
            cout << "X";

        vVal = inputInt / 5;
        inputInt = inputInt % 5;
        for (counter = 1; counter <= vVal; counter += 1)
            cout << "V";

        iVal = inputInt / 1;
        inputInt = inputInt % 1;
        for (counter = 1; counter <= iVal; counter += 1)
            cout << "I";

        cout << endl;
    }

    return 0;
}
