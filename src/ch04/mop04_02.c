// mop04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main(void) {
   // initialization, iteration condition, and increment 
   // are all included in the for statement header.
   for (int counter = 1; counter <= 5; ++counter) {
      printf("%d  ", counter);
   }

   puts(""); // outputs a newline
}


/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 *
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
