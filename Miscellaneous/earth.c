/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

#include <stdio.h>
#include <math.h>

int main(){
	int N = 0;
	scanf("%d",&N);

	long int num;
	for (int i = 0; i<N; i++){
		int power = N-i;
		int input = 0;
		scanf("%ld",&input);
		int firstDigit = input%10;
		num += (firstDigit * pow(10,power));
	}

	printf("%d",num);
    return 0;
}