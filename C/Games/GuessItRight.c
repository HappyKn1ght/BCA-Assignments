#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator

    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1; // Generates a number from 1 to 100
    int no_of_guesses = 0;                 // Counter for number of guesses
    int guessed;                           // Variable to store the guessed number
    char input[10];                        // To store user input, allowing for both numbers and characters

    // Introductory messages
    printf("--------------------------------------------------\n");
    printf("Welcome to my first ever game - \"Guess It Right!\"\n");
    printf("--------------------------------------------------\n\n");

    
    printf("This is my first ever game, hope you enjoy it!\n");
    printf("Let me explain the rules:\n");
    printf("1. I have picked a random number between 1 and 100.\n");
    printf("2. Your goal is to guess the number.\n");
    printf("3. After each guess, I will tell you whether the number is higher or lower.\n");
    printf("4. If you ever want to quit, just type 'q' or 'Q'.\n");
    printf("5. Keep guessing until you find the number!\n\n");

    printf("Good luck!\n\n");
    // Uncomment below line to reveal the answer (for testing only)
   // printf("Hint: The number to guess is %d\n\n", randomNumber); // Print the randomly generated number as a hint

    do
    {
        printf("Guess The Number (or enter 'q' to quit): ");
        scanf("%s", input); // Take input as a string

        // Check if the user wants to quit
        if (input[0] == 'q' || input[0] == 'Q')
        {
            printf("You quit the game.\nGAME OVER.\n");
            break; // Exit the loop if 'q' or 'Q' is entered
        }

        // Convert the input to an integer for comparison
        guessed = atoi(input); // Convert string to integer

        // Provide feedback on the guessed number
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }

        no_of_guesses++; // Increment the guess count

    } while (guessed != randomNumber);

    // Congratulate the user after they guess the number
    if (guessed == randomNumber)
    {
        printf("You have won!\nYou guessed the number in %d guesses.\n", no_of_guesses);
    }

    printf("Press Enter to exit...");
    getchar(); // Wait for the user to press Enter

    return 0;
}
