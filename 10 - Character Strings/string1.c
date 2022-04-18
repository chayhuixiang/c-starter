#include <stdio.h>
#include <string.h>

int main(){
    char inputString[100];
    char outputString[100];

    printf("Enter your string: \n");
    scanf("%s",inputString);
    int stringLength = strlen(inputString);
    for (int i = 0; i < stringLength; i++){
        outputString[stringLength-1-i] = inputString[i];
    }
    printf("Reversed String: %s\n",outputString);
    return 0;
}