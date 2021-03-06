// lca1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <stdlib.h>
#include "time.h"
#include <conio.h>
#include <ctype.h>
#include <string.h>

int score[2];
int hresult = 100;
int cresult = 100;
char choice;
char welcome[8]; //Added a string

void liveOrDie()

{
	srand(time(NULL));
	int r = (rand() %6) + 1;
	printf("Random number = %d\n", r);
	if (r == 0) {
		printf("You died!");
	}
	else {
		printf("You survived!");
	}

}
void gameInstructions()
{
	strcpy_s(welcome, "Welcome"); //Initialising the string
	// Function to print the game instructions
	printf("********************************************************************************\n");
	printf("* Game Instructions                                                            *\n");
	printf("*                                                                              *\n");
	printf("* %s                                                                      *\n", welcome); //Using the string
	printf("*                                                                              *\n");
	printf("* This is a simple 'Roll The Dice' Game                                        *\n");
	printf("* You have one dice and the computer has one dice                              *\n");
	printf("* You are playing against the computer                                         *\n");
	printf("* The player with the highest score will win                                   *\n");
	printf("* If both players have the same score it is a draw                             *\n");
	printf("*                                                                              *\n");
	printf("* Press any key if you are ready to play                                       *\n");
	//printf("*Game Instructions                                                             \n*");
	//printf("*Game Instructions                                                             \n*");
	//printf("*Game Instructions                                                             \n*");
	//printf("*Game Instructions                                                             \n*");
	printf("********************************************************************************\n");

	_getch();

}

int rollTheDice()

{
	srand(time(NULL));
	score[0] = (rand() % 6) + 1;
	score[1] = (rand() % 6) + 1;

	return score[0,1];
}


void waitabit()

{
	int i; //i is a local variable and only recognised in this function
	i = 0;
	while (i < 1)
	{
		printf("Wait %d\n",i);
		// printf("    ");
		i = i++;
	}
	printf("\n");
}

void checkResult(int hresult, int cresult)
	{
	//printf("hresult: %d\n", hresult);
	//printf("cresult: %d\n", cresult);
	if (hresult > cresult) { printf("You won!\n"); }
	else if (hresult < cresult) { printf("You lost\n"); }
	else printf("Draw!\n");
	printf("My score is: %d\n", cresult);
	printf("Your score is: %d\n", hresult);
	}


int main()
{
	gameInstructions();
	
	do {
		rollTheDice();
		//	waitabit();
		checkResult(score[0], score[1]);
		// The following printf would not work because i is not a global variable printf("The variable i has the following value: %d\n", i);
		printf("This is the end.\n\n");
		//	liveOrDie();
		printf("Press 'n' followed by <return> to end the game\n\n");
		choice = getchar();
		//printf("You typed: %c\n", choice);
	} while (choice != 'n');

		return 0;
}

