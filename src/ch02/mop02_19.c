// Calculate the product of three integers
#include <stdio.h>

int main(void) {
   printf("%s","Enter three integers: "); // prompt

   int x = 0;
   int y = 0; 
   int z = 0; 
   scanf("%d%d%d", &x, &y, &z); // read three integers
		// largest integer		
   if (x > y && x > z) {
	   printf("Largest is %d\n", x);
   }

   if (y > x && y > z) {
           printf("Largest is %d\n", y);
   }

   if (z > y && z > x) {
           printf("Largest is %d\n", z);
   }

   // smallest integer
   if (x < y && x < z) {
           printf("Smallest is %d\n", x);
   }

   if (y < x && y < z) {
           printf("Smallest is %d\n", x);
   }

   if (z < x && z < y) {
           printf("Smallest is %d\n", x);
   }


   int sum = x + y + z; // addition of value
   printf("The Sum is %d\n", sum); // display the sum

   int average = (x + y + z)/ 3; // division of value
   printf("The Average is %d\n", average);

   int result = x * y * z; // multiply values
   printf("The product is %d\n", result); // display result
   return 0;
} // end function main

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 * Write a program that inputsthree different integers from the keyboard, *
 * then displays the sum, the average, the product, the smallest and      *
 * the largest of these numbers. Use only the single-selection            *
 * form of the if statement you learned                                   *  
 *************************************************************************/


