#include <stdio.h>

int main(){
    int number = 10;
    int *pNumber = &number;

    printf("Address of the pointer: %p\n",(void*)&pNumber);
    printf("Value of the pointer: %p\n",pNumber);
    printf("Value of the pointed variable: %d\n",*pNumber);
    return 0;
}