#include <stdio.h>

int main(){
    float minutes;
    printf("Enter the number of minutes: ");
    scanf("%f",&minutes);
    float days = minutes/1440;
    float years = days/365;
    printf("Minutes: %f, Days: %f, Years: %f",minutes,days,years);
    return 0;
}