#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool guessed = false;
int count = 0;

void guessing(int correct){
	int guess;
	while(!guessed){
		printf("Guess a number.\n");
		scanf("%d", &guess);
		if(guess > correct){
			printf("Lower\n");
		} //end if
		else if(guess < correct){
			printf("Higher\n");
		} //end else if
		else if(guess == correct){
			guessed = true;
			printf("Correct! You got it in %d tries. \n", count);
			if(count > 7){
				printf("This was a poor performance, as your number of tries was greater than 7.\n");
			} //end if
			else if(count >= 5){
				printf("This was a good performance, as your number of tries was between 5 and 7.\n");
			} //end else if
			else{
				printf("This was a very good performance!\n");
			} //end else
		} //end else if
		count++;
	} //end while
} //end guessing


int main(){
 	int random = (rand() % 100) + 1; 
	char name[20];
	
	printf("Hello. What is your name?\n");
	scanf("%49s", name);
	printf("Hello, %s! ", name);
	guessing(random);
} //end main
