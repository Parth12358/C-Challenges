#include <stdio.h>

int main(int argc, char **argv)
{
    //Declarinfg variables and constants
	int hoursWorked = 0;
    #define regularPay 12 //12$per hour                                   (USE DEFINE FOR CONTANTS)
    int overtimePay = 18; //18$per hour for each hour over 40
    int grossPay = 0; //output of gross pay
    float taxesPaid = 0.0; //amount of taxes deducted
    float netPay = 0.0; //the net pay
    
    //getting the number of hours worked
    printf("Please enter the number of hours worked: ");
    scanf("%d", &hoursWorked);
    //Calculation of grossPay
    if (hoursWorked > 40){
        grossPay = (regularPay*40)+((hoursWorked-40)*overtimePay);
    }
    else{
        grossPay = hoursWorked*regularPay;
    }
    printf("\nGross Pay: %d", grossPay);
    
    //Calculation of taxes
    if (grossPay>300){
        taxesPaid += 300*0.15;
        int Pay = grossPay - 300;
        
        if (Pay>300){
            taxesPaid += 300*0.20;
            Pay -= 300;
            taxesPaid += 0.25*Pay;
        }
        else{
            taxesPaid += 0.20*Pay;
        }
    }
    else{
        taxesPaid = grossPay*0.15;
    }
    printf("\nTaxes paid: %f", taxesPaid);
    
    netPay = grossPay-taxesPaid;
    
    printf("\nNet Pay: %f", netPay);
    
    
	return 0;
}
