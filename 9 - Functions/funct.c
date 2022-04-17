#include <stdio.h>

int gcd(int n1, int n2){
    int small = n1 < n2 ? n1 : n2;
    int divisor;
    for (int i = 1; i <= small; i++){
        if (n1%i == 0 && n2%1 == 0){
            divisor = i;
        }
    }
    return divisor;
}

float absoluteValue(float n3){
    n3 = n3 < 0 ? -1*n3 : n3;
    return n3;
}

float squareRoot(float n4){
    const float epsilon = 0.00001;
    float guess = 1.0;
    if (n4<0){
        printf("Negative number passed!");
        return -1.0;
    } else {
        while (absoluteValue(guess * guess - n4) >= epsilon){
            guess = (n4/guess + guess)/2.0;
        }
        return guess;
    }
}

int main(){
    printf("%d\n",gcd(5,10));
    printf("%f\n",absoluteValue(-1.01));
    printf("%f\n",squareRoot(5.0));
    return 0;
}