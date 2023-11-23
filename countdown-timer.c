#include <stdio.h>
#include <unistd.h> // searched on how to add a delay then finding a new library that could be added for additional function throughout the program


int main(){


    int countNum; //initialized an integer named countNum


    printf("Enter number of seconds to count down: \n"); // prompt the user to input the number of seconds to countdown
    scanf("%d", &countNum); // store it at the address of countNum


    for(int i= countNum; i > 0; i--){ // introduced a for loop that starts from storing i is equal to the value of countNum, then if i is greater than 0, i should dicrement by 1
        printf("%d...\n", i); // print i...
        sleep(1); // delay per second to act as an actual timer
    }


    printf("Time's Up! \n"); // print the message as soon as the loop is finished


    return 0; // End of function
}