#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;

    int maxAttempts = 5;
    int userGuess;

    for (int attempt = 1; attempt <= maxAttempts;attempt++) {
        std::cout << "Attempt " << attempt << " - Guess the number (between 1 and 100): ";
        std::cin >> userGuess;

        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break; 
        } else {
            if (userGuess < secretNumber) {
                std::cout << "Too low. ";
            } else {
                std::cout << "Too high. ";
            }

            if (attempt < maxAttempts) {
                std::cout << "Try again.\n";
            } else {
                std::cout << "Sorry, you've run out of attempts. The correct number was: " << secretNumber << "\n";
            }
        }
    }

    return 0;
}