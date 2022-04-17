#include <stdio.h>

int main(){
    int index = 2;
    int prime[100] = {2,3};
    for (int i = 4; i <= 100; i++){
        _Bool isPrime = 1;
        for (int j = 0; isPrime && (i/prime[j] >= prime[j]); j++){
            if (i%prime[j] == 0){
                isPrime = 0;
            }
        }
        if (isPrime) {
            prime[index] = i;
            index++;
        }
    }

    for (int i = 0; i< 100; i++){
        if (prime[i] == 0){
            break;
        }
        printf("%d\n",prime[i]);
    }

    return 0;
}