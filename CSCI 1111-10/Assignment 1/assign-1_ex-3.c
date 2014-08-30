/*
	Assignment 1 Exercise 4
	CSCI 1111-10 Fall 2014
	Author: Ben Hansen
*/

#include <stdio.h>

/*
	Prints the string " jolly good "
*/	
void jollyGoodPrinter(void);
/*
	Prints the string "Which nobody can deny!"
*/
void finalLinePrinter(void);

int main()
{
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("For he's a");
		jollyGoodPrinter();
		printf("fellow! \n");
	}
	
	finalLinePrinter();
	system("pause");
	return 0;
}

//Prints "jolly good"
void jollyGoodPrinter()
{
	printf(" jolly good ");
}

//Prints "which nobody can deny!"
void finalLinePrinter()
{
	printf("Which nobody can deny! \n");
}

/*
	RUN SAMPLE:
	
	For he's a jolly good fellow!
	For he's a jolly good fellow!
	For he's a jolly good fellow!
	Which nobody can deny!
	Press any key to continue . . .
*/



