#include <stdio.h>
#include <math.h>

int gcd(int a, int b);
float AbsoluteValue(float x);
float SquareRoot(float x);

//Gives the greatest common diviser
int gcd(int a, int b)
{
    int output = 0;
    int track = 1;
    
    while (track<a && track<b)
    {
        if (a%track == 0 && b%track == 0)
        {
            output = track;
        }
        ++track;
    }
    return output;
}

//Returns absolute value of float enterred
float AbsoluteValue(float x)
{
    if (x<0)
    {
        x*=-1;
    }
    return x;
}

float SquareRoot(float x)
{
    if(x<0)
        return -1.0;
    
    return (float)sqrt(x);
}

int main(int argc, char **argv)
{
	int test1 = 12;
    int test2 = 10;
    
    printf("Absolute Value: %f\n", AbsoluteValue(test1));
    printf("GCD: %d\n", gcd(test1, test2));
    printf("Square root: %f\n", SquareRoot(test1));
	return 0;
}
