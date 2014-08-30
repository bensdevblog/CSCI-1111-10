/* 
	Assignment 1 Exercise 3
	CSCI 1111-10 Fall 2014
	Author: Ben Hansen
   
 */

#include <stdio.h>

/*
	Returns an age in days converted from years
	
	@param		Age in years
	@return		Age in days
*/
int yearsToDays(int);

int main()
{
	int ageInYears = 24; 
	int ageInDays = yearsToDays(ageInYears);
	
	printf("My age in years: %d \n", ageInYears);
	printf("My age in days: %d \n", ageInDays);
	
	system("pause");
	
	return 0;
}

//Returns an age in days converted from years
int yearsToDays(int ageInYears)
{
	int ageInDays = ageInYears * 365;
	return ageInDays;
}

/*
	RUN SAMPLE:
	h
	My age in years: 24
	My age in days: 8760
	Press any key to continue . . .

*/









