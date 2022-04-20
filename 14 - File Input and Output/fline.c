#include <stdio.h>

int main(){
    FILE *pFile = fopen("file.txt","r");
    char c;
    int count = 1;

    if (pFile == NULL){
        printf("Error while opening file!");
        return -1;
    }

    while ((c = fgetc(pFile)) != EOF){
        if (c == '\n'){
            count++;
        }
    }

    fclose(pFile);
    pFile = NULL;
    
    printf("Number of lines in the file: %d", count);
    return 0;
}