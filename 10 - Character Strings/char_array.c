#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int characterCount(char myString[]){
    int count = 0;
    while (myString[count] != '\0'){
        count++;
    }
    return count;
}

void concatenate(char result[], char str1[], char str2[]){
    int count = 0;
    int index = 0;
    while (str1[count] != '\0'){
        result[index] = str1[count];
        index++;
        count++;
    }
    count = 0;
    while (str2[count] != '\0'){
        result[index] = str2[count];
        index++;
        count++;
    }
    result[index] = '\0';
}

bool equalString(char str3[], char str4[]){
    int index = 0;
    if (strlen(str3) != strlen(str4)){
        return false;
    }
    while (str3[index] != '\0'){
        if (str3[index] != str4[index]){
            return false;
        }
        index++;
    }
    return true;
}

int main(){
    char myString[10] = "Hello!";
    char result[20];
    char str1[10] = "Hi!";
    char str2[10] = "Whatup?";
    printf("Character Count: %d\n",characterCount(myString));
    concatenate(result, str1, str2);
    printf("String Concatenation: %s\n",result);  
    printf("Equal String: %d",equalString("Hello!","Hello!"));
    return 0;
}