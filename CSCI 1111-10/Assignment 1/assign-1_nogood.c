/*
	Assignment 1 (nogood.c)
	CSCI 1111-10 Fall 2014
	Author: Ben Hansen
	
*/

#include <stdio.h>


/*
	Returns the value of a number to a given power
	
	@param x	The exponenet
	@param n	The number
	@return		n to the power of x
*/
int powerOf(int,int);

int main()
{
	int n;
	n = 5;
	
	printf("n = %d, n squared = %d, n cubed = %d\n",n, powerOf(2,n), powerOf(3,n));
	
	system("pause");
	return 0;
}

//Returns the value of a number to a given power
int powerOf(int x ,int n)
{
	int temp = n;
	int i;
	
	for(i = 1; i < x; i++)
	{
		temp *= n;
	}
	
	return temp;
}


/*
	RUN SAMPLE:
	
	n = 5, n squared = 25, n cubed = 125
	Press any key to continue . . .
*/











