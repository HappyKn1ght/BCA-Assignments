import java.util.Scanner;
import java.util.Random;
// import java.util.concurrent.ThreadLocalRandom;

public class Random_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        int botInput = rand.nextInt(3);
        int userScore = 0;
        int botScore = 0;

        System.out.println("--- Enter Rock(0), Paper(1), Scissors(2) ---");
        System.out.println("--- Enter 9 to Quit the game ---");
        for (int i = 1; i <= 5; i++) {
            System.out.print("\nRound "+ i + " - Enter your move: ");
            int userInput = sc.nextInt();
            if (userInput == 9) {
                System.out.println("Exiting game... Thanks for playing!.");
                break;
            }
            if (userInput < 0 || userInput > 2) {
                System.out.println("Invalid! Try 0, 1, or 2.");
                continue;
            }
            switch (userInput) {
                case 0:
                    System.out.println("You chose: Rock");
                    break;
                case 1:
                    System.out.println("You chose: Paper");
                    break;
                case 2:
                    System.out.println("You chose: Scissor ");
                    break;
                default:
                    System.out.println("Invalid! Try 0, 1, or 2.");

            }
            switch (botInput) {
                case 0:
                    System.out.println("Bot chose: Rock");
                    break;
                case 1:
                    System.out.println("Bot chose: Paper");
                    break;
                case 2:
                    System.out.println("Bot chose: Scissor ");
                    break;
                default:
                    System.out.println("Invalid! Try 0, 1, or 2.");

            }

            // System.out.println("Bot chose: " + botInput);
            // System.out.println("You chose: " + userInput);

            if (userInput == botInput) {
                System.out.println("Result: It's a Tie!");
            } else if ((userInput == 0 && botInput == 2) ||
                    (userInput == 1 && botInput == 0) ||
                    (userInput == 2 && botInput == 1)) {
                System.out.println("Result: You Win this round!");
                userScore++;
            } else {
                System.out.println("Result: Bot Wins this round!");
                botScore++;
            }
        }
        System.out.println("\n--- FINAL SCORE ---\nYou: "+userScore+" | Bot: "+botScore);

        
        if (userScore > botScore) {
            System.out.println("You are the Champion! ");
        } else if (botScore > userScore) {
            System.out.println("Bot is the Champion! ");
        } else {
            System.out.println("The match is a Draw!");
        }
        sc.close();
    }
    // int max = 2, min = 0;
} // int n = ThreadLocalRandom.current().nextInt();
