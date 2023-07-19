#include <stdio.h>

int main(int argc, char **argv)
{
    //decl;aring variabl;es here
    //these are hardcoded
	double widthRectangle = 12.0;
    double heightRectangle = 5.0;
    //these have temporary values
    double Perimeter = 0.0;
    double Area = 0.0;
    
    //Calculation here
    Perimeter = 2.0*(heightRectangle+widthRectangle);
    Area = heightRectangle*widthRectangle;
    
    //Output
    printf("Area is :%g\n", Area);
    printf("Perimeter is :%g\n",Perimeter);
    
	return 0;
}
