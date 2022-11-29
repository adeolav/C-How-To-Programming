// mop02_20.
#include <stdio.h>

int main(){
    int radius; /* circle radius */
    printf("%s", "Input the circle radius: " ); /* prompt user */

    scanf( "%d", &radius ); /* read integer radius */
    /* calculate and output diameter, circumference and area */
    
    printf( "\nThe diameter is %d\n", 2 * radius );
    printf( "The circumference is %f\n", 2 * 3.14159 * radius );
    printf( "The area is %f\n", 3.14159 * radius * radius );
    return 0; /* indicate successful termination */
} /* end main */

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 * (Circle Area, Diameter and Circumference) For a circle of radius 2,    *
 * display the diameter, circumference and area.                          * 
 * Use the value 3.14159 for π. Use the following formulas                *
 * (r is the radius): diameter = 2r, circumference = 2πr and area = πr2.  *
 * Perform each of these calculations inside the printf statement(s)      * 
 * and use the conversion specification %f.                               *                                   *
 *************************************************************************/
