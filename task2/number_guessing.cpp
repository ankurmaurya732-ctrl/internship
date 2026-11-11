#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secretNumber, guess;
    int attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess the correct number!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too High! Try a smaller number." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too Low! Try a larger number." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed the number!" << endl;
            cout << "The correct number was: " << secretNumber << endl;
            cout << "Total attempts: " << attempts << endl;
        }

    } while (guess != secretNumber);

    return 0;
}

