/**
 * Program to swap two numbers without using a third variable.
 * Compilation : gcc Swap.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 1. Assignment_1 - C Foundation.
 *
 */

#include <stdio.h>

int main() {
    
    int firstnum = 0;
    int secondnum = 0;
    
    // Scanning two numbers. 
    scanf("%d %d", &firstnum , &secondnum);
    
    // printing Original numbers.
    printf("Original firstnum = %d , Original secondnum = %d\n", firstnum , secondnum);
    
    //setting first num to firstnum + secondnum.
    firstnum = firstnum + secondnum;
    // setting secondnum to firstnum - secondnum to change it to Original firstnum.
    secondnum = firstnum - secondnum;
    // setting firstnum to firstnum - secondnum to change it to Original secondnum.
    firstnum = firstnum - secondnum;
    
    // printing the swapped numbers.
    printf("New firstnum = %d , New secondnum = %d\n", firstnum , secondnum);
	return 0;
}
