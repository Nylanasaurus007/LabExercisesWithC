/*Coding Exercise: Algorithmic operations for integer numbers
*Problem: Implement a simple calculator
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE		/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>						/*standard input/output library*/


int main(void)
{
	double num1, num2, add, substract, multiply, divide;		/*output - declaring 2 variables for integers*/
	int remainder;												/*output - remainder as integer value*/


	/*Display the output header*/
	printf("\nSimple Calculator\n");
	printf("-------------------\n");

	/*Display the output*/
	printf("1st operand: \n");
	scanf("%lf", &num1);

	printf("2nd operand: \n");
	scanf("%lf", &num2);


	/*Calculation of the integers*/
	add = num1 + num2;

	substract = num1 - num2;

	multiply = num1 * num2;

	divide = num1 / num2;

	remainder = (int)num1 % (int)num2;

	/*Display the output*/
	printf("%.lf + %.lf : %.lf\n", num1, num2, add);
	printf("%.lf - %.lf : %.lf\n", num1, num2, substract);
	printf("%.lf * %.lf : %.lf\n", num1, num2, multiply);
	printf("%.lf / %.lf : %.2lf\n", num1, num2, divide);
	printf("%d %% %d : = %d", (int)num1, (int)num2, remainder);
	getchar();

	return 0;
}