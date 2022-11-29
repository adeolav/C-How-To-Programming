// Preincrementing and postincrementing.
#include <stdio.h>
#include <limits.h>

// function main begins program execution
int main(void) {
    // demonstrate postincrement
    int c = 5; // assign 5 to c
    printf("%d\n", c); // print 5
    printf("%d\n", c++); // print 5 then postincrement
    printf("%d\n\n", c); // print 6
    
    // demonstrate preincrement
    c = 5; // assign 5 to c
    printf("%d\n", c); // print 5
    printf("%d\n", ++c); // preincrement then print 6
    printf("%d\n", c); // print 6
    
} // end function main

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
