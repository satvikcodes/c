#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int guessed, noOfGuess = 0;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    // Print the random number
    printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Enter Your Guess - ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Your Guess is Higher\n");
        }
        else
        {
            printf("Your Guess is Lower\n");
        }
        noOfGuess++;
    } while (guessed != randomNumber);

    printf("Your guess is correct i.e %d in %d attempts\n", randomNumber, noOfGuess);

    return 0;
}