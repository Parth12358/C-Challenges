#include <stdio.h>
#include <string.h>

char Reverse(char str1[]);

char Reverse(char str1[])
{
    int n = strlen(str1)-2;
    char output[strlen(str1)];
    while (n>0)
    {
        output[n] = str1[n-strlen(str1)];
        --n;
    }
    return output;
}

int main(int argc, char **argv)
{
	char str[] = "HelloWorld";
    printf("%s", Reverse(str));
	return 0;
}
