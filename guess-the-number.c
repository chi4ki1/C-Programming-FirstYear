#include <stdio.h>

int main() {
    int secretNum; // initialize an integer named secretNum


    printf("Secret Number: \n"); // prompt the user to input a secret number
    scanf("%d", &secretNum); // store it to the address of secretNum


    int guessNum; // initialize an integer named guessNum


    for (;;) { // introduce a for loop that includes any positive or negative numbers
        printf("Guess Number: \n"); // prompt the user to input their guessed number
        scanf("%d", &guessNum); // store it to the address of guessNum


        if (guessNum != secretNum && guessNum < secretNum) { // verify if the guessed number is not equals to the secret number AND if the guessed number is less than the secret number
            printf("It is more! \n"); // print out that it should input a higher number
        } else if (guessNum != secretNum && guessNum > secretNum) { // verify if the guessed number is not equals to the secret number AND if the guessed number is greater than the secret number
            printf("It is less! \n"); // print out that it should input a lower number
        } else {
            printf("Congratulations, you got the correct number!\n"); // Otherwise, the user should've inputted the correct number, it'll print a congratulatory message
            break; // exit the loop which means the user has successfully guessed the correct number
        }
    }


    return 0; // End of Function
}