#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    int i = 0;
    char *pStr = 0;
    
    printf("Enter the number of characters: ");
    scanf("%d", &i);
    
    pStr = (char *)malloc(i*sizeof(char));
    
    printf("Enter the string: ");
    scanf("%s", pStr);    
    
    
    printf("String entered: %s", pStr);
    free(pStr);
	return 0;
}
