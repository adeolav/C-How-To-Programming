// mop02_03.c
// using if statements, relational
// opertors, and equaliy operators.
#include <stdio.h>

// function main begins program execution
int main(void) {
    puts("Enter two integers, and I tell you\n"
         "the relationships they satisfy:");

    int number1 = 0; // first number to read from user 
    int number2 = 0; // second number to read from user
    
    scanf("%d %d", &number1, &number2); // read two integers

    if (number1 == number2) {
        printf("%d is equal to %d\n", number1, number2);
    }

    if (number1 != number2) {
        printf("%d  is not equal to %d\n", number1, number2);
    }

    if (number1 < number2) {
        printf("%d is less than %d\n", number1, number2);
    }

    if (number1 > number2) {
        printf("%d is greater than  %d\n", number1, number2);
    }

    if (number1 <= number2) {
        printf("%d is less than or equal to %d\n", number1, number2);
    }

    if (number1 >= number2) { 
        printf("%d is greater than or equal to %d", number1, number2);
    } // end if
}

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/


