/*Coding Lab Exercise: Functions
*Coding Problem: Implement a function isNorthernHemisphere() that returns a logical true only if the geographic location passed to the function is on the northern hemisphere
*Implement a function isSouthernHemisphere() accordingly.
*Write a program that uses some test coordinates to verify the correct return values.
*Implement a function localDistanceKm() that returns the distance in km between two geographic locations calculated according to (14.3).
*Implement a function distanceKm() that returns the distance in km between two geographic locations calculated according to (14.4).
*Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE		/*macro - prevent scanf() buffer overflow*/
#define PI 3.14159265					/*constant PI*/
#include <stdio.h>						/*standard input/output library*/
#include <math.h>						/*standard various mathematical functions and one macro library*/


/*Prototype Functions*/

int isNorthernHemisphere(float latitude1);
int isSouthernHemisphere(float latitude2);
double localDistanceKM(double latitude1, double latitude2, double longitude1, double longitude2);
double distanceKm(double latitude1, double latitude2, double longitude1, double longitude2);


int main(void) 
{
	/*Declaring the variables*/
	double latitude1 = 53.557078, longitude1 = 10.023109;			/*HAW Hamburg Latitude and Longitude*/
	double latitude2, longitude2;


	/*Get and Display the Latitude and Longitude*/

	printf("Please enter the Latitude: \n");
	scanf("%lf", &latitude2);
	getchar();

	printf("Please enter the Longitude:\n");
	scanf("%lf", &longitude2);
	getchar();

	/*Display the output*/
	printf("The local distance to HAW is: %.1lf KM\n", localDistanceKM(latitude1, latitude2, longitude1, longitude2));

	printf("The distance is: %.1lf KM\n", distanceKm(latitude1, latitude2, longitude1, longitude2));


	/*Printing the Hemisphere location of latitude2*/

	if (isNorthernHemisphere(latitude2) == 1)
	{
		printf("The location in in Northern Hemisphere");
	}
	else if (isSouthernHemisphere(latitude2) == 1)
	{
		printf("The location is in the Souther Hemisphere");
	}
	else
	{
		printf("The location is in the Equator");
	}


	return 0;
}

/*definition of the function for determining Northern Hemisphere - logical argument */
int isNorthernHemisphere(float latitude1)
{
	if (latitude1 > 0 && latitude1 <= 90)
		return 1;
	else
		return 0;
}

/*definition of the function for determining Northern Hemisphere - logical argument*/
int isSouthernHemisphere(float latitude2)
{
	if (latitude2 < 0 && latitude2 >= -90)
		return 1;
	else
		return 0;
}

/*definition of the function for determining the local distance in KM*/
double localDistanceKM(double latitude1, double latitude2, double longitude1, double longitude2)
{
	/* Delta Y = 111.3 * |latitude1 - latitude2| */
	double deltaY = 111.3 * (fabs(latitude1 - latitude2));

	/* Delta X = 111.3 * cos((latitude1 + latitude2) / 2) * |longitude1 - longitude2| */
	double deltaX = 111.3 * cos(((latitude1 + latitude2) / 2) * (PI / 180)) * fabs(longitude1 - longitude2);

	/* Distance = sqrt(deltaX^2 + deltaY^2) */
	double distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

	return distance;
}

/*definition of the function for determining the global distance in KM*/
double distanceKm(double latitude1, double latitude2, double longitude1, double longitude2)
{
	/*globaldistance = 6378.388 · cos^-18(sin latitude1 * sin latitude2) + (cos latitude1 * cos latitude2)) * cos(longitude2 -longitude1)*/

	double globaldistance = 6378.388 * acos(sin(latitude1 * (PI / 180)) * sin(latitude2 * (PI / 180)) + cos(latitude1 * (PI / 180)) * cos(latitude2 * (PI / 180)) * cos(longitude2 * (PI / 180) - longitude1 * (PI / 180)));

	return globaldistance;
}