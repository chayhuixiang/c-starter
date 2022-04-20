#include <stdio.h>

int main(){
    char myString[] = "AB";
    short varA = 348;
    int varB = 74565;
    printf("Size of char array: %d, Size of varA: %d, Size of varB: %d\n",sizeof(myString),sizeof(varA),sizeof(varB));
    printf("Address of char array: %p,",myString);
    printf("Address of varA: %p,",&varA);
    printf("Address of varB: %p",&varB);
    return 0;
}