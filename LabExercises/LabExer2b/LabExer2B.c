/*Coding Lab Exercise: Data Types and Control Flow
*Problem Lab2B: Wheat Chessboard Problem 
*Sequential numbering of the chessboard fields (1 to 64)
*Number of grains on the specific field (i. e., 1, 2, 4, 8, . . . )
*Sum of grains on all fields up to the specific field (e. g., 1 + 2 + 4 = 7 for the third field)
*Author: Analyn Amurao*/

#include <stdio.h>						/*standard input/output libray*/


int main(void) 
{
	/*Declaring variables using data type unsigned long long*/
	unsigned long long grains = 1;
	unsigned long long sum = 1;
	double weight = 0;

	/*Printing the header*/
	printf(" Field |	On Field     | Sum\t\n");

	/*For loop sequential number of chessboard*/
	for (int i = 1; i <= 64; i++)														/*variable i for sequential index*/
	{	

		if (i % 8 == 1)
		{
			printf("-------+---------------------+------------------------------\n");
		}


		printf(" %4d  | %19llu | %19llu = %.1e\n", i, grains, sum, (double)sum);		/*Printing the chessboard with number of grains together with the updated version of sum*/

		/*the calculation of sum and the grains for the next field*/
		
		grains = grains * 2;
		sum = sum + grains;		


	}


	/*Determine the overall weight of all wheat grains (assuming a weight of 55 mg /grain).
	*How does this relate to the weight of the worldwide wheat production in 2015, being about 735.8 million tons?*/

	/*Calculate the weight of all grains*/

	weight = sum * .055;

	printf("The overall weight of all wheat grains is: %.1e million tons. \n", weight / 1e9);

	/* Compare with worldwide wheat production in 2015 */

	double worldwide_production = 735.8 * 1000000000;

	printf("The weight of all wheat grains is %.2e times smaller than the worldwide wheat production in 2015.\n", worldwide_production / weight);

	return 0;
}
