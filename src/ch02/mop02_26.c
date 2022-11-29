// Separating Digits in an Integer
#include <stdio.h>
int main() {
	int number; /* number input by user */
	int checker; /* first temporary integer */
	int pass; /* second temporary integer */
	printf( "%s", "Enter a five-digit number: " ); /* prompt user */
	scanf( "%d", &number ); /* read integer */
	printf( "%d ", number / 10000 ); /* print left-most digit */
	pass = number % 10000;
	printf( " %d ", pass / 1000 );
	checker = pass % 1000;
	printf( " %d ", checker / 100 );
	pass = checker % 100;
	printf( " %d ", pass / 10 );
	checker = pass % 10;
	printf( "%d\n", checker); /* print right-most digit */
	return 0; /* indicate successful termination */
} /* end main */

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * Write a program that inputs one five-digit number, separates the       *
 * number into its individual digits and displays the digits separated    *
 * from one another by three spaces each.[Hint:Use combinations           *
 * of integer division and the remainder operation.]  For example,        *
 * if the user types in 42139, the program should display 4  2  1  3  9   *
 **************************************************************************/
