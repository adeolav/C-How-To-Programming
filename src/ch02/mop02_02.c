// mop02_02.c
// Addition program
#include <stdio.h>

// function main begins program execution
int main(void) {
	int integer1 = 0; // will hold first number user enters
	int integer2 = 0; // will hold second number user enters
	
	printf("Enter first integer: "); // prompt
	scanf("%d", &integer1); // read an integer
	
	printf("Enter second integer: ");
	scanf("%d", &integer2);

	int sum = 0; // variable in which sum will be stored
        sum = integer1 + integer2; // assign total to sum

	printf("Sum is %d\n", sum); // print sum

} //end function main


/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
