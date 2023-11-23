#include <stdio.h> 

int main() {
    int customer_age; //Initialize three different integer variables which holds the  value for the customer's age, their movie start time, and if it is tuesday.
    int movie_time;
    int is_tuesday;

movie-ticketing-system    printf("Enter customer's age: \n"); // Prompt the user to input their age and validate if it is not lower than 1.
    scanf("%d", &customer_age);
    if (customer_age < 1) {
        printf("Please enter a valid age!\n"); // Display an error message and have it re-prompt the user again to input a valid number.
        return 1;
    }

    printf("Enter the movie start time (24-hour format): \n"); // Prompt the user to input their movie start time and check if it is in a valid 24-hour format.
    scanf("%d", & movie_time);
    if ( movie_time < 0 || movie_time > 24) {
        printf("Please input a valid 24-hour time format!\n"); // Display an error message and have it re-prompt the user again to input a valid number.
        return 1;
    }

    printf("Is today Tuesday? (1 for Yes, 0 for No): \n"); // Prompt the user to check if today is tuesday by answering 1 if Yes and 0 if No.
    scanf("%d", &is_tuesday);
    if (is_tuesday != 0 && is_tuesday != 1) {
        printf("Please input 1 for Yes, 0 for No!\n"); // Validate if the answer is between 1 or 0 and if not display an error message and re-prompt the user.
        return 1;
    }

    // Initialize the constant regular fare and the different discount values.
    int regular_fare = 300;
    float early_discount = 0.25;
    float senior_discount = 0.30;
    float tuesday_discount = 0.50;
    float child_discount = 0.50;

    // Calculate the final ticket price based on their different conditions per age group.
    float ticket_price = regular_fare;

    if (customer_age >= 13 && customer_age < 65) { // Validate if the age group is between 13 and 65
        if ( movie_time < 17) { // Check if the time is earlier than 5 PM or 17 in the 24-hour format.
            ticket_price -= regular_fare * early_discount; // The ticket price now is regular price subtracted to the discounted early value.
        }
        if (is_tuesday == 1) { // Check if today is tuesday if YES, the ticket price will be discounted by 50%.
            ticket_price *= tuesday_discount;
        }

    } else if (customer_age < 13) {  // Validate if the age group is below 13.
        ticket_price -= regular_fare * child_discount; // Initialize that the ticket price for below 13 is discounted by 50%.
        if (movie_time < 17) {
            ticket_price -= ticket_price * early_discount; // When the if condition is met here, the ticket price will be updated to subrtract the early discount value.
        }

    } else if (customer_age >= 65) { // Validate if the age group is 65 and older.
        ticket_price -= regular_fare * senior_discount; // Initialize that the ticket price for this age group will be discounted by 30%.
        if ( movie_time < 17) {
            ticket_price -= regular_fare * early_discount;
        }
        if (is_tuesday == 1) {
            ticket_price *= tuesday_discount;
        }
    }

    printf("The total ticket price is: %.2f pesos\n", ticket_price); // Display the final ticket price that met a specific condition.

    return 0; // End of function.
}
