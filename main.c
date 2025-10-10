#include <stdio.h>
#include <stdlib.h>  // To and rand() and srand()
#include <time.h>    // To and time()

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    while (1) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
