/*
	craps.c
	Taimur Ghani
	25 October 2016
	A craps simulator. Prompts the user how much to bet on each throw. 
	Must verify that they enter a number as well.
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<ctype.h>

int main()
{
	srand(time(NULL));
	char bob[20];
	printf("Enter the amount you want to bet:\n");
	scanf("%s",&bob);
	if(isdigit(atoi(bob))==0)
	{
		printf("");
	}
	else
	{
		printf("Entered invalid input. Enter input:\n");
		scanf("%s",&bob);
	}

	int bet=atoi(bob);
	int point=0;
	int dice1=1+(rand()%6);
	int dice2=1+(rand()%6);
	int sum=dice1+dice2;
	printf("Die1Initial:%i Die2Initial:%i SumInitial:%i\n",dice1, dice2, sum);
	int counter=0;
	if (counter==0)
	{
		if (sum==7 || sum==11)
		{
			printf("You win $%i\n",bet);
			counter++;
		}	
		else if (sum==2 || sum==3 || sum==12)
		{
			printf("You lose $%i\n",bet);
			counter++;
		}
	}
	
	if (sum==4 || sum==5 || sum==6 || sum==8 || sum==9 || sum==10)
	{
		point=sum;
	
	}

	if (counter==0)
	{
	int dice1=1+(rand()%6);
	int dice2=1+(rand()%6);
	int sum=dice1+dice2;
	while (counter==0)
	{
		int dice1=1+(rand()%6);
		int dice2=1+(rand()%6);
		int sum=dice1+dice2;
		printf("Die1:%i Die2:%i Sum:%i\n",dice1,dice2,sum);
		if (sum==7)
		{
			printf("You lose $%i\n",bet);
			counter++;	
		}
		else if (sum==point)
		{
			printf("You win $%i\n",bet);
			counter++;
		}
	}
	}
}
