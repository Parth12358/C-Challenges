#include <stdio.h>


struct item{
    char *pItemName;
    int Quantity;
    float Price;
    float Amount;
};

void readItem(struct item *ptr);
void printItem(struct item *ptr);

void readItem(struct item *ptr)
{
    printf("Enter item name: ");
    scanf("%s", (*ptr).pItemName);
    printf("\nEnter the quantity: ");
    scanf("%d", &(ptr->Quantity));
    printf("\nEnter the price: ");
    scanf("%f", &(ptr->Price));
    
    ptr->Amount = (ptr->Quantity)*(ptr->Price);
    
}

void printItem(struct item *ptr)
{
    printf("ITEM DETAILS\n");
    printf("%s\n", (*ptr).pItemName);
    printf("%d\n", ptr->Quantity);
    printf("%f\n", ptr->Price);
    printf("%f\n", ptr->Amount);
}

int main(int argc, char **argv)
{
	struct item *ptr;
    char array[20];
    ptr->pItemName = array;
    readItem(ptr);
    printItem(ptr);
	return 0;
}
