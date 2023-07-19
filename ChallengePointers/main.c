#include <stdio.h>

int main(int argc, char **argv)
{
	int num = 10;
    int *pnumber;
    
    pnumber = &num;
    
    printf("Address of th pointer: %p\n", &pnumber);
    printf("Value of the pointer: %p\n", pnumber);
    printf("Value of what the pointer is pointing to: %d\n", *pnumber);
    
    
	return 0;
}
