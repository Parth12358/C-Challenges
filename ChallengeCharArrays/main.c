#include <stdio.h>

int CharLength(const char string[]);
void Concatenate(char result[], const char str1[], const char str2[]);
_Bool StrEquals(const char str1[], const char str2[]);

//Finds length of string
int CharLength(const char string[])
{
    int n = 0;
    while (string[n] != '\0')
    {
        ++n;
    }
    return n;
}

void Concatenate(char result[], const char str1[], const char str2[])
{
    int n = 0;
    int m = 0;
    while(str1[n]!='\0')
    {
        result[n] = str1[n];
        ++n;
    }
    while(str2[m]!='\0')
    {
        result[n] = str2[m];
        ++n;
        ++m;
    }
    result[n] = '\0';
}

int main(int argc, char **argv)
{
	const char str1[] = "String";
    const char str2[] = "Cheese";
    
    int length = CharLength(str1)+CharLength(str2)+1;
    
    char result[length];
    
    printf("%d\n", CharLength(str1));
    
    Concatenate(result, str1, str2);
    
    printf("%d\n", CharLength(str1));
    printf("%s\n", result);
	return 0;
}
