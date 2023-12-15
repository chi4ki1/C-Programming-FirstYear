#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("****************************************\n");
    printf("*                                      *\n");
    printf("*       TREASURE HUNT GAME 🕵‍         *\n");
    printf("*                                      *\n");
    printf("****************************************\n");
    sleep(1);
    printf("\n");
    printf("You are at a crossroads. \n");
    printf("ⲯ﹍︿﹍︿﹍ⲯ ﹍ⲯ﹍ⲯ﹍︿﹍☼");
    sleep(1);

    int availableAttempts = 5;
    int correctAttempts = 0;
    int chosenPath = 0;

    // Theis loop allows a maximum of 5 attempts, and the player needs to provide 5 correct answers to complete it.
    // The loop continues until the player either gets 5 correct answers or empty the 5 attempts.
    for (int i = 0; i < availableAttempts || correctAttempts < 5; i++) { 
        printf("\nChoose a path (1-North, 2-South, 3-East, 4-West): \n");

// This while-loop ensures that the player's input is restricted to a valid range of choices (1-4).
// If the user enters a number outside this range, the loop prompts the player again to enter a valid choice.
        while (1) { 
            scanf("%d", &chosenPath);
            if (chosenPath >= 1 && chosenPath <= 4) {
                break; 
            } else {
                printf("Invalid choice. Please choose a valid path (1-4):\n");
            }
        }
        
        // I utilized switch function to carefully assess the inputted value from the chosenPath and add conditions inside it.
        switch (chosenPath) { 
        // I added curly braces in my case switches as codeblocks (the compiler i am using) does not run until I add it.
        // I fount out that it is possible and I think it is better to properly seperate the statements.
        case 1: { 
            int northAttempt;
            printf("What is (15 * 2) / 3? \n");
            scanf("%d", &northAttempt);

            if (northAttempt == 10) {
                correctAttempts++;
                printf("You are correct! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d", correctAttempts, availableAttempts);
            } else {
                availableAttempts--;
                printf("You are incorrect! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d", correctAttempts, availableAttempts);
            }
            break;
        }

        case 2: {
            int southAttempt;
            printf("What is the square of 8 minus 14? \n");
            scanf("%d", &southAttempt);

            if (southAttempt == 50) {
                correctAttempts++;
                printf("You are correct! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            } else {
                availableAttempts--;
                printf("You are incorrect! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            }
            break;
        }

        case 3: {
            int eastAttempt;
            printf("If 5x - 3 = 17, what is x? \n");
            scanf("%d", &eastAttempt);

            if (eastAttempt == 4) {
                correctAttempts++;
                printf("You are correct! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            } else {
                availableAttempts--;
                printf("You are incorrect! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            }
            break;
        }

        case 4: {
            int westAttempt;
            printf("What is the remainder when 28 is divided by 6?. \n");
            scanf("%d", &westAttempt);
            
            // As for this condition, I decided to have the program itself solve the correct answer for the arithmetic equation instead of defining it.
            if (westAttempt == 28 % 6) {
                correctAttempts++;
                printf("You are correct! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            } else {
                availableAttempts--;
                printf("You are incorrect! \n");
                sleep(1);
                printf("\nCorrect Answers: %d, Remaining Attempts: %d \n", correctAttempts, availableAttempts);
            }
            break;
        }

        default:
            break;
        }

        if (availableAttempts == 0) {
            printf("\nOh no! ( •᷄⌓•᷅ ) You ran out of attempts!\n");
            sleep(1);
            printf("------------------------------ \n");
            printf("         ❌Game Over! ❌       \n");
            printf("------------------------------ \n");
            break;
        }
// I added an additional game mechanic: a plot-based riddle challenge that serves as the finishing touch of the game.
// Since the game has only four (4) routes, I incorporated this element to enhance the player's experience.
// Upon successfully answering correctly all four arithmetic equations, the player encounters an island with a fisherman who presents a riddle.
// A correct answer grants the final point needed to finish the game.
// The correct answer unlocks a boat, allowing the player to sail to the island and claim the treasure.
// An incorrect answer results in a consequence, affecting the player's journey and introducing a different game ending.
// Regardless of its remaining attempts, this riddle is an important question as it is important to the plot.

        if (correctAttempts == 4 && availableAttempts >= 1) {
            printf("\nLook!👀 \n");
            sleep(2);
            printf("\nYou stumbled upon an island!🏝️ \n");
            sleep(1);
            printf("\nYou see a strange-looking old fisherman.👨🎣 \n");
            sleep(1);
            printf("\nThe fisherman will lend you a boat. \nONLY IF you answered the riddle correctly!\n");
            sleep(1);

            int riddleAnswer;
            printf("\n👨:Jack has 7 sons. Each of his sons has a sister. If so, how many children does Jack have? \n");
            scanf("%d", &riddleAnswer);

            if (riddleAnswer == 8) {
                correctAttempts++;
                printf("\n👨: Correct! All of the Jack's sons have the same sister. You can have the boat!✔️");
                sleep(1);
                printf("\nYou can now sail to the island...⛵\n");
                sleep(1);
                printf(". \n");
                sleep(1);
                printf(".. \n");
                sleep(1);
                printf("... \n");
            } else {
                availableAttempts--;
                printf("👨:You answer is incorrect ❌! \n");
                sleep(1);
                printf("\nYou don't have a boat now... \n");
                sleep(1);
                printf("\nYou ended up swimming your way to the island🏊 \n");
                printf(". \n");
                sleep(1);
                printf(".. \n");
                sleep(1);
                printf("... \n");
                sleep(1);
                printf("You drowned in the middle of the sea...💀\n");
                sleep(1);
                printf("------------------------------ \n");
                printf("         ❌Game Over! ❌       \n");
                printf("------------------------------ \n");
                return 0;
            }
        }

        if (correctAttempts == 5) {
            printf("\nCONGRATULATIONS!🎉 \n");
            sleep(1);
            printf("You found the Treasure! 🎁 \n");
            break;
        }
    }

    return 0;
}
