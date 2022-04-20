#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *pFile = fopen("file.txt","r");
    FILE *writeFile = fopen("file1.txt","a");
    char c;
    char upperC;

    if (pFile == NULL){
        printf("Error while reading file!\n");
        return -1;
    }
    while ((c = fgetc(pFile)) != EOF){
        upperC = toupper(c);
        fputc(upperC,writeFile);
    }

    fclose(pFile);
    fclose(writeFile);
    pFile = NULL;
    writeFile = NULL;

    if (rename("file1.txt","file_upper.txt")){
        printf("File cannot be renamed!");
        return -1;
    } else {
        printf("File renamed successfully!");
    }
    return 0;
}