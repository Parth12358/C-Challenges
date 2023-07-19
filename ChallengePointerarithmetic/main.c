#include <stdio.h>

int CountChar(char *ptr);

int CountChar(char*ptr)
{
    char const *Startptr = ptr;
    while (*ptr)
        ++ptr;
    int output = ptr-Startptr;
    return output;
}

int main(int argc, char **argv)
{
	char *ptr = 0;
    char array[] = "YEAHHH BOIII";
    ptr = array;
    printf("%d", CountChar(ptr));
	return 0;
}
