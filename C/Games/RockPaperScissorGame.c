#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int botInput, userInput;
    int botScore = 0, userScore = 0;
    srand(time(0));

    printf("--- Rock(0), Paper(1), Scissors(2) ---\n");
    printf("--- Enter 9 to Quit the game ---\n");

    for (int i = 1; i <= 5; i++)
    {
        botInput = (rand() % 3); // Generate fresh move every round!

        printf("\nRound %d - Enter your move: ", i);
        scanf("%d", &userInput);

        // for exiting game
        if (userInput == 9)
        {
            printf("Exiting game... Thanks for playing!");
            break;
        }

        // Cheat code - uncomment to see bot's move (for testing only)
        // printf("botInput: %d\n", botInput);

        // userInput
        switch (userInput)
        {
        case 0:
            printf("You chose: Rock\n");
            break;
        case 1:
            printf("You chose: Paper\n");
            break;
        case 2:
            printf("You chose: Scissors\n");
            break;
        }

        // botInput
        switch (botInput)
        {
        case 0:
            printf("Bot chose: Rock\n");
            break;
        case 1:
            printf("Bot chose: Paper\n");
            break;
        case 2:
            printf("Bot chose: Scissors\n");
            break;
        }

        if (userInput == botInput)
        {
            printf("Result: It's a Tie!\n");
        }
        else if ((userInput == 0 && botInput == 2) || (userInput == 1 && botInput == 0) || (userInput == 2 && botInput == 1))
        {
            printf("Result: You Win this round!\n");
            userScore++;
        }
        else
        {
            printf("Result: Bot Wins this round!\n");
            botScore++;
        }
    }

    printf("\n--- FINAL SCORE ---\n");
    printf("You: %d | Bot: %d ", userScore, botScore);

    if (userScore > botScore)
    {
        printf("\nYou are the Champion!");
    }
    else if (botScore > userScore)
    {
        printf("\nBot is the Champion!");
    }
    else
    {
        printf("\nThe match is a Draw!");
    }

    return 0;
}