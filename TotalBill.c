#include <stdio.h>
double main()
 {
     //Declare the variables
     double totalCost;
     double mealcost;
     float salad;
     float soup;
     float sandwich;
     float pizza;
     int num;
     //Declare the menu variables with their corresponding prices
     salad = 9.95;
     soup = 4.55;
     sandwich = 13.25;
     pizza = 22.35;

    //This randomizes the food options
     srand(time(NULL));

     num = rand()%4;

     if (num == 0){
         mealcost = salad;
     } else if (num == 1){
         mealcost = soup;
     } else if (num == 2){
         mealcost = sandwich;
     } else if (num == 3){
         mealcost = pizza;
     }

    // Displaying the menu
    printf("\nThe menu for today is:");
    printf("\n1. Salad: $9.95");
    printf("\n2. Soup: $4.55");
    printf("\n3. Sandwich: $13.25");
    printf("\n4. Pizza: $22.35");
    //Declare tax variable
    int taxPercent;
    //Asks for user input for the tax percent
    printf("\nEnter Tax Percent:");
    scanf("%d" , &taxPercent);
    //Declare tip variable
    int tipPercent;
    //User input for how much they want to tip
    printf("Enter Tip Percent:");
    scanf("%d" , &tipPercent);
    printf("**************BILL**************");

    //Display the cost of a meal randomly chosen
    printf("\nCost: $%.2f ", mealcost);


    //Calculate the total tax amount and display
    double taxAmount = (double) taxPercent / 100 * mealcost;
    printf("\nTax: $%.2f " ,taxAmount);

    //Calculate the total tip amount and display
    double tipAmount = (double) tipPercent / 100 * mealcost;
    printf("\nTip: $%.2f" , tipAmount);

    //Calculate the total cost amount and display
    totalCost = taxAmount + tipAmount + mealcost;
    printf("\nTotal Cost: $%.2f " , totalCost);
    
    //Program ends
    return 0;

}