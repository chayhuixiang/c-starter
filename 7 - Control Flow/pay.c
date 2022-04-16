#include <stdio.h>

int main(){

    int hours;
    float payRate = 12.00;
    float grossPay;
    float taxes;
    float netPay;

    printf("Enter the number of hours worked in a week: ");
    scanf("%d",&hours);

    if (hours > 40){
        grossPay = 40*payRate + (hours-40)*1.5*payRate;
    } else {
        grossPay = hours*payRate;
    }

    if (grossPay <= 300){
        taxes = 0.15*grossPay;
    } else {
        taxes = 0.15*300;
        if (grossPay <= 450){
            taxes += (grossPay-300)*0.2;
        } else {
            taxes += (0.2*150 + 0.25*(grossPay-450));
        }
    }

    netPay = grossPay - taxes;

    printf("Gross Pay: %.2f, Taxes: %.2f, Net Pay: %.2f",grossPay,taxes,netPay);

    return 0;
}