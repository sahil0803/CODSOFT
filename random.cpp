#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand(0);
    int random = rand() % 100 + 1;
    int guess = -1;
    int num_guesses = 0;

    cout << "Guess a number between 1 and 100: " << endl;

    while (guess != random) {
        cin >> guess;
        num_guesses++;

        if (guess > random) {
            cout << "Too high!" << endl;
        } else if (guess < random) {
            cout << "Too low!" << endl;
        } else {
            cout << "You guessed it in " << num_guesses << " guesses!" << endl;
        }
    }

    return 0;
}

