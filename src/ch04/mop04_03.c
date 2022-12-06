// fig04_03.c  
// Summation with for.
//mop04_03.c
#include <stdio.h>

int main(void) {
   int sum = 0; // initialize sum

   for (int number = 2; number <= 100; number += 2) {
      sum += number; // add number to sum                     
   }

   printf("Sum is %d\n", sum);
}




/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 *
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
