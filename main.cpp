#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // To Seed random number generator
    srand(time(0));

    // To Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // Loop until the correct guess
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        int difference = abs(secretNumber - guess); // Calculate the distance between guess and the secret number

        if (guess > secretNumber) {
            if (difference > 20) {
                cout << "Way too high! Try again." << endl;
            } else if (difference > 10) {
                cout << "You're getting closer, but still a bit too high!" << endl;
            } else {
                cout << "You're really close! Just a little too high!" << endl;
            }
        } else if (guess < secretNumber) {
            if (difference > 20) {
                cout << "Way too low! Try again." << endl;
            } else if (difference > 10) {
                cout << "You're getting closer, but still a bit too low!" << endl;
            } else {
                cout << "You're really close! Just a little too low!" << endl;
            }
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}

