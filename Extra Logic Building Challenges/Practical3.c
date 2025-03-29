/*Write a C program that implements a simple number guessing game. The program should
 generate a random number between1 and 100, andthe user should guess the number
 within a limited number of attempts.*/
#include <stdio.h>
#include <stdlib.h>

main() {
    int number, guess, attempts = 0, maxAttempts=7;
    printf("%d",rand());
    number = rand() % 100; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100. You have %d attempts.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess Number: ");
        scanf("%d", &guess);
        attempts++;
        if (guess == number) {
            printf("You guessed the correct number in %d attempts.\n", attempts);
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }
    printf("Sorry, you've used all %d attempts. The correct number was %d.\n", maxAttempts, number);
}

