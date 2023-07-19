#include <stdio.h>

int main(int argc, char **argv)
{
	struct employee{
        int hireDate;
        float Salary;
        char Name[10];
    };
    struct employee Phil = { 12072023, 390.0, "Phil"};
    
    struct employee Tim;
    
    printf("Enter Employee Name: ");
    scanf("%s", Tim.Name);
    printf("\nEnter hire date: ");
    scanf("%d", &Tim.hireDate);
    printf("\nEnter Salary: ");
    scanf("%f", &Tim.Salary);
    
    printf("\nName: %s\nHire Date: %d\nSalary: %f", Tim.Name, Tim.hireDate, Tim.Salary);
    
	return 0;
}
