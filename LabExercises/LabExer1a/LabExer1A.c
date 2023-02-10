/*Coding Exercise: Algorithmic operations for integer numbers
*Problem: Implement a simple calculator
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE		/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>						/*standard input/output library*/


int main(void)
{
	int num1 = 7, num2 = 3;		/*output - declaring 2 variables for integers*/
												


	/*Display the output header*/
	printf("\nSimple Calculator\n");
	printf("-------------------\n");

	/*Display the output*/
	printf("1st operand: 7\n");


	printf("2nd operand: 3\n");
	



	/*Display the output*/
	printf("7 +3 : %d\n", num1 + num2);
	printf("7 - 3: %d\n", num1 - num2);
	printf("7 * 3 : %d\n", num1 + num2);
	printf("7 / 3 : %d\n", num1 / num2);
	printf("7 %% 3 : = %d\n", num1 % num2);
	getchar();

	return 0;
}