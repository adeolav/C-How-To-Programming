#include <stdio.h>
int main() {
    char intEquivalent; /* letter, digit or character */
    printf( "%s", "Input a letter, digit, or character: " ); /* prompt */
    scanf( "%c", &intEquivalent ); /* read user input */
    printf( "%c's integer equivalent is %d\n", intEquivalent,intEquivalent );
    return 0; /* indicate successful termination */
} /* end main */


/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * Write a C program that displays the integer equivalents of some        *
 * uppercase letters,lowercase letters, digits and special symbols.       *
 * At a minimum, determine the integer equivalents of the following:      *
 * A B C a b c 0 1 2 $ * + / and the space character                      *
 **************************************************************************/
