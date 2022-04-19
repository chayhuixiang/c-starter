#include <stdio.h>
#include <stdlib.h>

int main(){
    int inputSize;
    printf("Key in number of characters to your text: ");
    scanf("%d",&inputSize);
    
    char *pString = (char*)malloc(inputSize * sizeof(char));
    if (pString != NULL){
        printf("Key in string: ");
        scanf("%s",pString);
        printf("Text keyed in: %s",pString);
        free(pString);
        pString = NULL;
    } else {
        printf("Memory allocation failed!");
    }
    
}