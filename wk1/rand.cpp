// Brian Foster Coding 1 Spring 2026
// Switch, random numbers, and while loops.

// your task.... create the rest of the code to say "Random Numbers!"
// then run the program.

#include <iostream>
#include <random>         // for random numbers
#include <ctime>        // for seeding the random numbers.

using namespace std;

int main() {
    srand(time(0));         // seed the random number generator with the current time.
    cout << "Random numbers!\n";

    cout << "Our first random number is " << rand() << ".\n";

    cout << "here are ten random numbers:\n";

    int counter = 0;
    while(counter++ < 10) {
        cout << (rand() % 10) + 1 << endl;
    }

    // the computer picks a random number between 1 and 10 (inclusive)
    int theNumber = (rand() % 10) + 1;
    // the computer asks the player to guess that random number.
    int guess = -1;
    // guess the number game
    do {
        cout << "What is your guess?\n";
        // the player guesses
        cin >> guess;
        // the computer evaluates whether the guess is
            // correct!
            if(theNumber == guess) {
                // congratulate the player, end the game
                cout << "You guessed it!\n";
                return 0;
            }
            // too high
            else if(guess > theNumber) {
                // tell the player "too high!"
                cout << "that guess is too high!\n";
            }
            // too low
            else if(guess < theNumber) {
                // tell the player "too low!"
                cout << "that guess is too low!\n";
            }
        // let the player guess again, if it was incorrect
        } while(guess != theNumber);


    return 0;
}