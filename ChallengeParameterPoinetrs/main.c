#include <stdio.h>

void Square(int *n);

void Square(int *n)
{
    int temp = *n;
    temp *= temp;
    *n = temp;
}

int main(int argc, char **argv)
{
    int num = 15;
    int *pnum = &num;
    Square(pnum);
	printf("Value: %d\n",*pnum);
	return 0;
}
