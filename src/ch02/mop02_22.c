#include <stdio.h>

int main() {
    int number; /* integer input by user */
    printf( "%s", "Input an integer: " ); /* prompt */
    scanf( "%d", &integer );/* read integer */
    
    /* test if integer is even */
    if ( number % 2 == 0 ) {
    printf( "%d is an even number\n", number );
    } /* end if */
    
    /* test if integer is odd */
    if ( number % 2 != 0 ) {
    printf( "%d is an odd number\n", number );
    } /* end if */
    
    return 0; /* indicate successful termination */
} /* end main */

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * Write a program that reads an integer and determines and displays      *
 * whether it’s odd or even. Use the remainder operator. An even number   *
 * is a multiple of two. Any multiple of two leaves a                     *
 * remainder of zero when divided by 2.                                   *
 *                                                                        *
 *************************************************************************/
