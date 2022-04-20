#include <stdio.h>

int main(){
    FILE *pFile = fopen("file.txt","r");
    long offset = 0;
    char c;

    if (pFile == NULL){
        return -1;
    }

    do {
        if (fseek(pFile,offset,SEEK_END)){
            printf("File pointer could not be set.");
        }
        c = fgetc(pFile);
        printf("%c",c);
        offset--;
    } while (ftell(pFile) > 1);

    fclose(pFile);
    pFile = NULL;
    return 0;
}