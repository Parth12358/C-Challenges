#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char **argv)
{
    //random number generator
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand()%21;
    int numberOfTries = 5;
    int guess = 0;
    
    //user friendly greeting
    printf("This is a guessing game\n");
    printf("I have chosen a number between 0 and 20 which you must guess\n");
    
    //main loop
    while(numberOfTries>0){
        //Getting input from user
        printf("\n");
        printf("You have %d tries left\n", numberOfTries);
        printf("Enter a guess: ");
        scanf("%d", &guess);
        
        //checking whether number is between 0 and 20
        if (guess >20 || guess<0){
            printf("the number is between 0 and 20");
            continue;
        }
        //checking the guess
        if (guess == randomNumber)
        {
            printf("\n\nYou have guessed the right answer!");
            break;
        }
        else //if not equal
        {
            if (guess>randomNumber){
                printf("The number entered %d is higher than the answer.", guess);
            }
            else{
                printf("The number entered %d is lower than the answer.", guess);
            }
        //changing expression of loop
        --numberOfTries;
        }
    }
    
    
    
	return 0;
}