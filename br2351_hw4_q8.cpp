/* Question 8:
 * Implement a number guessing game. The program should randomly choose an integer
 * between 1 and 100 (inclusive), and have the user try to guess that number.*/

// Bug 1: Should only print line "Out of guesses!" when guessed wrong on 5th try (Not "My number is smaller/bigger"
// first. (Resolved)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    int luckyNum;
    int rangeMin, rangeMax;
    int guessRemaining;
    int userGuess;
    bool isWinner;

    // Generate random number
    srand(time(0));
    luckyNum = (rand() % 100) + 1;

    // initialize rangeMin, rangeMax, guessRemaining, isWinner
    rangeMin = 1;
    rangeMax = 100;
    guessRemaining = 5;
    isWinner = false;

    while (!isWinner && guessRemaining > 0) {
        cout << "I thought of a number between 1 and 100! Try to guess it." << "\n"
             << "Range: [" << rangeMin << ", " << rangeMax << "], Number of guesses left: " << guessRemaining << "\n"
             << "Your guess: ";
        cin >> userGuess;

        guessRemaining -= 1;

        // Compares number to winning number, informs user accordingly.
        if (userGuess == luckyNum){
            cout << "Congrats! You guessed my number in " << 5 - guessRemaining << " guesses.";
            isWinner = true;
        } 
        else if (guessRemaining > 0) {
            if (userGuess > luckyNum) {
                cout << "Wrong! My number is smaller." << endl;
                rangeMax = userGuess - 1;
            } 
            else {
                cout << "Wrong! My number is bigger." << endl;
                rangeMin = userGuess + 1;
            }
        } 
        else {
            cout << "Out of guesses! My number is " << luckyNum << endl;
        }

        cout << endl;
    }

    return 0;
}
