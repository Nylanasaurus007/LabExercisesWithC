/*Coding Exercise: Digit Sum
*Problem: Calculate and print the digit sum of the entered year.
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE		/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>						/*standard input/output library*/

int main(void)
{
	int year,						/*input - user's year of birth*/
		sumofyear = 0,				/*output - the total sum of year's digit*/
		remainder;					/*output - gives us the remainder of the number*/

	/*Display the header and get the birth year*/
	printf("Please enter your birth year: \n");

	int original_year;
	scanf("%d", &original_year);
	year = original_year;

	/*Calculation of digit sum using FOR LOOP*/
	for (; year != 0; year = year / 10){
		
		remainder = year % 10;
		sumofyear = sumofyear + remainder;
	
	}


	/*Display the output*/
	printf("The digit sum of %d is: %d\n", original_year, sumofyear);


	return 0;
}