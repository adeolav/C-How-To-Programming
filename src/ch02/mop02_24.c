/*************************************************************************
 * Distinguish between the terms fatal error and non-fatal error.        *
 * Why might you prefer to experience a fatal error rather than          *
 * a non-fatal error?                                                    *
 *************************************************************************/

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * A fatal error causes the program to terminate prematurely.             *
 * A nonfatal error occurs when the logic of the program is incorrect,    *
 * and the program does not work properly.                                *
 * A fatal error is preferred for debugging purposes.                     *
 * A fatal error immediately lets you know there is a problem with the    *
 * program,whereas a nonfatal error can be subtle and possibly            *
 * go undetected.                                                         *
 **************************************************************************/

// Extra
#include <stdio.h>
// checkerboard pattern with printf statements
int main() {
    printf( "With eight printf() statements: \n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "\nNow with one printf() statement: \n" );
    printf( "* * * * * * * *\n * * * * * * * *\n"
            "* * * * * * * *\n * * * * * * * *\n"
            "* * * * * * * *\n * * * * * * * *\n"
            "* * * * * * * *\n * * * * * * * *\n" );
    return 0; /* indicate successful termination */
} /* end main */
