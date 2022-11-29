#include <stdio.h>

int main() {
    int num1; /* first integer */
    int num2; /* second integer */
    
    printf( "%s", "Input two integers: " ); /* prompt user */
    
    scanf( "%d%d", &num1, &num2 ); /* read two integers */
    /* use remainder operator */
    if ( num1 % num2 == 0 ) {
    printf( "%d is a multiple of %d ", num1, num2 );
    printf( "by a factor of %d\n", num1 / num2 );
    } /* end if */
    if ( num1 % num2 != 0 ) {
    printf( "%d is not a multiple of %d\n", num1, num2 );
    } /* end if */
    return 0; /* indicate successful termination */
} /* end main */

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * Write a program that reads two integers and determines and displays    *
 * whether the first is a multiple of the second.                         *
 * Use the remainder operator.                                            *
 *                                                                        *
 *************************************************************************/

