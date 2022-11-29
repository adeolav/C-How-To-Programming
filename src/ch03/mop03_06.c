#include <stdio.h>
int main() {
    int grade = 0;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    //puts((grade >= 60) ? "Passed" : "Failed");
    if (grade >= 90){
       puts("A");
    }
    else {
        if (grade >= 80){
       puts("B");
      }
    
        else {
            if (grade >= 70){
       puts("C");
    }
    
            else {
                if (grade >= 60){
       puts("D");
    }
    
                else {
                    puts("F");
                   }
            }
                   
      }
    return 0;
}

/**************************************************************************
 * (C) Copyright 2022 by Oladele Adewunmi                                 * 
 * For Personal Education Purpose Only. All Right Reserved.               *
 *                                                                        *
 *************************************************************************/
