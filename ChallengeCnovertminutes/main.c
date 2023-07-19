#include <stdio.h>

int main(int argc, char **argv)
{   
    //declaring variables
	int minutes = 0;
    double minutesInYears = (60*24*365);
    double Years = 0.0;
    double Days = 0.0;
    
    //Getting input
    printf("Input the number of minutes: ");
    scanf("%d", &minutes);
    
    //Calculations
    Years = (minutes/minutesInYears);
    Days = ((minutes/60.0)/24.0);
    
    //Output
    printf("\nThe number of years is: %g\nThe number of days is: %g",Years,Days);
	return 0;
}
