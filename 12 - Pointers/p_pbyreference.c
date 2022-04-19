#include <stdio.h>

void square( int *pNum){
    *pNum = (*pNum)*(*pNum);
    return;
}

int main(){
    int inputNumber;
    printf("Please enter a number: ");
    scanf("%d",&inputNumber);
    square(&inputNumber);
    printf("Squared Number: %d",inputNumber);
}