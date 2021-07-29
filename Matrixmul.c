/**
 * Program to multiply the given 2 matrices.
 * Compilation : gcc Matrixmul.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 5. Assignment_1 - C Foundation.
 *
 */

#include<stdio.h>

int main()
{
    int size;
    // scanning the size.
    printf("Enter size of matrix\n");
    scanf("%d" , &size);
    
    // making two matrices of size * size each.
    int mat1[size][size];
    int mat2[size][size];
    
    printf("Enter elements of first matrix\n");
    // Scanning both the matrices.
    for(int i = 0 ; i < size ; i++)
    {
        for(int  j = 0 ; j < size ; j++)
        {
            scanf("%d" , &mat1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix\n");
    for(int i = 0 ; i < size ; i++)
    {
        for(int  j = 0 ; j < size ; j++)
        {
            scanf("%d" , &mat2[i][j]);
        }
    }
    
    // making a new matrix to store multiplication of both matrices
    int newmat[size][size];
    
    // filling the newmat with 0's originally.
    for(int i = 0 ; i < size ; i++)
    {
        for(int  j = 0 ; j < size ; j++)
        {
            newmat[i][j] = 0;
        }
    }
    
    // storing multiplication of mat1 and mat2 in newmat.
    for(int i = 0 ; i < size ; i++)
    {
        for(int  j = 0 ; j < size ; j++)
        {
            for(int k = 0 ; k < size ; k++)
            {
                // multiplying every row of mat1 to every column of mat2.
                newmat[i][j] = newmat[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    
    printf("Multiplication of first and second matrix is as follows : \n");
    // printing the newmat which has multiplication of mat1 and mat2.
    for(int i = 0 ; i < size ; i++)
    {
        for(int  j = 0 ; j < size ; j++)
        {
            printf("%d ", newmat[i][j]);
        }

        //printing new line after every row.
        printf("\n");
    }

    return 1;
}

