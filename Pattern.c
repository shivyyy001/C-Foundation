/**
 * Program to print pyramid having a given number of steps.
 * Compilation : gcc Pattern.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 2. Assignment_1 - C Foundation.
 *
 */

#include<stdio.h>

int main()
{
    int steps = 0;
    // scanning the number of steps.
    scanf("%d", &steps);
    
    int row = 0;
    int col = 0;
    int spaces = (steps - 1);
    
    // To iterate till number of steps.
    for(int row = 1; row <= steps ;row++)
    {
        // To print spaces.
        for(int sp = spaces; sp >= 1; sp--)
        {
            printf(" ");
        }
        
        // To iterate till a particular row is finished.
        for(int col = 1; col <= row ; col++)
        {
            // printing #.
            printf("# ");
        }
        
        // printing the new line.
        printf("\n");
        
        // decreasing the number of spaces by 1 after every row. 
        spaces--;
    }
    
    return 1;
}
