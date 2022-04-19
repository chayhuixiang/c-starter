#include <stdio.h>

int stringLength(const char *pString){
    const char *pStringEnd = pString;
    while (*pStringEnd){
        pStringEnd++;
    }
    return (pStringEnd - pString);
}

int main(){
    char myString[] = "Hello!";
    int length = stringLength(myString);
    printf("String Length: %d\n",length);
    return 0;
}