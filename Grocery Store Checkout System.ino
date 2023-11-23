#include <stdio.h> 

#define MAX_ITEMS 100 //set maximum items to 100

int main() {
    int useritems; //initialize useritems

    printf("Good day! Please input the number of your items: "); //prompt the user to input the number of items
    scanf("%d", &useritems); //read or scan it and store it to useritems
    
    int count; //initialize count
    float price[MAX_ITEMS]; //store a price in every item in the array of MAX_ITEMS
    float totalprice; //initialize totalprize

     for (count = 0; count < useritems; count++) {  //initialize count to 0 and loop it for every count is less than the number of items, add 1
        printf("Enter the price of item %d: ", count + 1); //store a value (price) in every item inputted by the user
        scanf("%f", &price[count]); // //read or scan it and store it to the address of price array at its count position
        
        totalprice+=price[count]; // adds all the price inputted and store it to totalprice
    }
    
    float salestax = totalprice * 0.05; //assign salestax to the equation for the 5% 
    printf("The final total price to pay is: PHP %.2f", salestax + totalprice); //add the totalprice and salestax and print it
    return 0; //return 0 to indicate that the program is successful
}
