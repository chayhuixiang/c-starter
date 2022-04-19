#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pfile = NULL;
    char str[60];

    pfile = fopen("file.txt","r");
    if (pfile == NULL){
        printf("Error while opening file!\n");
        return -1;
    } else {
        printf("File successfully opened!\n");
    }

    if ((fgets(str,60,pfile)) != NULL){
        printf("%s",str);
    }

    fclose(pfile);
    pfile = NULL;

    system("pause");

    return 0;
}