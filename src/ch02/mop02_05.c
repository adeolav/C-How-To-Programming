// Calculate the product of three integers
#include <stdio.h>

int main(void) {
   printf("%s","Enter three integers: "); // prompt

   int x = 0;
   int y = 0; 
   int z = 0; 
   scanf("%d%d%d", &x, &y, &z); // read three integers

   int result = x * y * z; // multiply values
   printf("The product is %d\n", result); // display result
} // end function main

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
