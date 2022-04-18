#include <stdio.h>
#include <string.h>

int main(){
    int inputSize;
    printf("Input number of strings: ");
    scanf("%d",&inputSize);

    char inputs[inputSize][256];
    for (int i = 0; i<inputSize; i++){
        scanf("%s",inputs[i]);
    }

    for (int i = 0; i<inputSize-1;i++){
        for (int j = 0; j < inputSize-1;j++){
            if (strcmp(inputs[j],inputs[j+1]) == 1){
                char dummy[256];
                strcpy(dummy, inputs[j+1]);
                strcpy(inputs[j+1],inputs[j]);
                strcpy(inputs[j], dummy);
            }
        }
    }
    printf("\nThe strings appear after sorting: \n");
    for (int i = 0; i<inputSize;i++){
        printf("%s\n",inputs[i]);
    }
    return 0;
}