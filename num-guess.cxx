#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (userGuess != numberToGuess) {
        cin >> userGuess;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again: ";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You guessed it!" << endl;
        }
    }

    system("pause");
    
    system("cls");
    main();
}
