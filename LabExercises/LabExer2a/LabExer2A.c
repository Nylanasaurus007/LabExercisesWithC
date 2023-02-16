/*Coding Lab Exercise: Data Types and Control Flow
*Problem Lab2A: Usefor-loops to print all fields of a chessboard in a 2-dimensional order to the console.
Author: Analyn Amurao*/

#define _CRT_SECURE_NO_DEPRECATE			/*macro - prevent scanf() buffer overflow*/
#include <stdio.h>							/*standard input/output library*/
#include <stdlib.h>							/*standard numeric conversion functions, pseudo-random numbers generation functions, memory allocation, process control functions library*/


int main() {
    int rows;
    char columns = 'h';

    printf("+---+----+----+----+----+----+----+----+\n");		/*top header*/

    /*outer loop rows*/
    for (rows = 8; rows >= 1; rows--) {                         /* for loop for rows*/

        for (int i = 'a'; i < columns; i++) {                   /*nested for loop for columns*/
            printf(" %c%d |", i, rows);
        }
        printf(" %c%d |\n", columns, rows);                     /*prints the row 8 to 1 and columns h to a */
        printf("+---+----+----+----+----+----+----+----+\n");  /*middle and bottom header*/
    }


    return 0;
}
