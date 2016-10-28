/*
	numberguess.c
	Taimur Ghani
	October 21 2016
	A game in which the user guesses the random number generated. If
	they guess it wrong they try again. Otherwise they win. 
*/
#include<stdlib.h>
#include<stdio.h>
#include <ctype.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	char guess[20];
	int guessnum;
	int i, counter;
	counter=1;
	i=1+(rand()%10);
	while (counter!=0)
	{
		printf("Guess a number between 1 and 10:\n");
		scanf("%s",&guess);
		guessnum=atoi(guess);
		if ((guessnum%10==guessnum || guessnum==10) &&  guessnum!=0)
		{
			if (guessnum==i)
			{
				printf("You win!\n");
				counter=0;
			}
			else
			{
				printf("Try again\n");
			}
		}
		else
		{
			printf("Try again\n");
		}	
	}
}
