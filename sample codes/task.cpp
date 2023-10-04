#include <iostream>

using namespace std;

int main() {
    // Initialize the target number
    int target_number = rand() % 100 + 1;

    // Initialize the number of tries
    int num_tries = 0;

    // Keep guessing until the number of tries is greater than 10
    while (num_tries <= 10) {
        // Get a guess from the user
        int guess;
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;

        // Increment the number of tries
        num_tries++;

        // Check if the guess is less than the target number
        if (guess < target_number) {
            cout << "Your guess is too low. Try again." << endl;
        }
        // Check if the guess is greater than the target number
        else if (guess > target_number) {
            cout << "Your guess is too high. Try again." << endl;
        }
        // If the guess is neither less than nor greater than the target number, it must be equal
        else {
            // The guess is correct, so the player has won
            cout << "You won in " << num_tries << " tries!" << endl;
            break;
        }
    }

    // If the loop has ended and the player has not won, they have lost
    if (num_tries > 10) {
        cout << "You could not guess in 10 tries. Computer won." << endl;
    }

    return 0;
}
