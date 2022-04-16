#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	time_t t;
	srand((unsigned) time(&t));
	int randomNumber = rand() % 21;
	int userNumber;
    int guesses;
	
	printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");
	
	for (guesses = 5; guesses >= 1; guesses--){
		printf("You have %d tries left.\nEnter a guess: ",guesses);
		scanf("%d",&userNumber);
		if (userNumber == randomNumber){
			printf("Congratulations. You guessed it!");
			return 0;
		} else {
			if (userNumber > randomNumber){
			    printf("Sorry, %d is wrong. My number is less than that.\n",userNumber);
            } else {
			    printf("Sorry, %d is wrong. My number is more than that.\n",userNumber);
            }
            
		}
	}

	printf("You have run out of tries. The number was %d.",randomNumber);

	return 0;
}

