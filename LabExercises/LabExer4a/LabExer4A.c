/*Coding Lab Exercise: Arrays and Pointers
*Problem:  Implement functions working with 1-D and 2-D arrays
*Use pointer types to return more than one value from a function
*Author: Analyn Amurao*/


#define _CRT_SECURE_NO_DEPRECATE			/*macro - prevent scanf() buffer overflow*/
#define _USE_MATH_DEFINES					/*macro - */
#include <stdio.h>							/*standard input/output library*/
#include <stdlib.h>							/*stadard library memory allocation/freeing functions*/
#include <math.h>							/*standard various mathematical functions and one macro library*/

double distanceKm(double latitude1, double latitude2, double longitude1, double longitude2);     /*Prototype Function*/

int main(void)
{
	/*declaring variables and array*/

	double totalDistance = 0;				/* Define a variable to hold the total distance and initialize it to zero */


	double latitudes[] = { 53.557029, 53.557166, 53.557274, 53.560288, 53.561306, 53.562015, 53.558241, 53.557900, 53.557203 };
	double longitudes[] = { 10.022918, 10.021343, 10.020297, 10.014906, 10.015426, 10.016568, 10.023244, 10.022142, 10.022632 };


	for (int i = 0; i < 8; i++)
	{
		totalDistance += distanceKm(latitudes[i], latitudes[i + 1], longitudes[i], longitudes[i + 1]);
	}


	/* Print the total distance */
	printf("Total distance: %.2lf km\n", totalDistance);

	return 0;
}



/*definition of the function for determining the global distance in KM*/
double distanceKm(double latitude1, double latitude2, double longitude1, double longitude2)
{
	/*globaldistance = 6378.388 · cos^-1(sin latitude1 * sin latitude2) + (cos latitude1 * cos latitude2)) * cos(longitude2 - longitude1)*/

	double globaldistance = 6378.388 * acos(sin(latitude1 * (M_PI / 180)) * sin(latitude2 * (M_PI / 180)) + cos(latitude1 * (M_PI / 180)) * cos(latitude2 * (M_PI / 180)) * cos(longitude2 * (M_PI / 180) - longitude1 * (M_PI / 180)));

	return globaldistance;
}

