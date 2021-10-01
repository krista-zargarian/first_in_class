#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void menu() {
//Displaying the options for the number guessing game
printf("\nPress 1 to play a game");
printf("\nPress 2 to change the max number");
printf("\nPress 3 to quit\n");
}
// main method
int main() {
    //set the max value to 10 
    int max = 10;
    //this is to randomize the number (1-10) for the number chosen that the user has to guess for the game
    int input = 0,inp,random;
    // plays the game if the input is not 3 (option 3 ends the game)
    while(input!=3){
    menu();
    scanf("%d", &input);
    //if the user chooses option 1 to play the game
    if(input == 1){
        srand(time(0));
        //declaring random variable for the random number being chosen by the program
        //formula is: random = (rand()) % (upper - lower +1)) + lower
        random = (rand() %(max - 0 + 1))+ 0;
        while(random != inp){
            //user has to guess the number between 1 and the max, which is set to be 10
            printf("Guess the number between 1 to %d (press q to quit):",max);
            scanf("%d",&inp);
            //if the number the user inputs is higher than the randomized number chosen for the game,
            // then the message will say it is too high so they can guess again
            if(inp > random){
                printf("Your guess is too high.\n\n");
            }
            //if the user guesses a number too low, then the program will let them know it's too low
            // and they can guess again
            else if (inp < random){
                printf("Your guess is too low.\n\n");
            }
            // if the user guesses the number correctly, the message will display that they won the game
            else if(inp ==random){
                printf("You won!\n\n");
            }
            }
        }
        //This is for case 2. If 2 is inputted by the user, then they want to change the max 
        //from 10 to another number, that is not a negative number, not can it exceed the max.
        else if (input == 2){
            printf("Enter the number you want to be the max: ");
            //user inputs the value for the new max from 10 to another number
            scanf("%d", &max);
            while(max<0 || max > RAND_MAX){
                //state the restrictions (can't be negative or go above the max)
                printf("The number cannot be negative or go above the max. Try again: ");
                scanf("%d", &max);
            }
        }
        //if the user chooses option 3, then the game ends
        else if(input == 3){
            printf("Thank you for playing. The game is over.");
        }
    }  
    // program ends  
    return 0;
    }
