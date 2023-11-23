#include <stdio.h>

int main() {
    
    int choiceNum; // initialize a variable named choiceNum

    do { // introduce a do-while loop
        printf("Menu: \n 1. Play Game \n 2. Load Game \n 3. Exit \n"); // display the menu bar where users can choose what number to input
        printf("\n"); 
        printf("Enter choice: \n"); // prompt the user to input a number
        scanf("%d", &choiceNum); // store it at the address of choiceNum
        
        switch (choiceNum) { // use the switch function and if the user inputted a number it will diplay the message corresponding to it then, end the switch function
            case 1: 
                printf("Playing game...\n");
                printf("\n");
                break;
            case 2:
                printf("Loading game... \n");
                printf("\n");
                break;
            case 3:
                printf("Exiting... \n");
                printf("\n");
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n"); // print an error message if the number inputted by the user is not valid
                printf("\n");
        }
    } while (choiceNum != 3); // After the switch function, it proceeds to the end of the loop. The while condition, checks again if choiceNum is not equals to three (which means if the user is exiting). If yes, the loop exits, and the program moves to the end of function.


    return 0;
}