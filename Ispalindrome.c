/**
 * Program to check if a given string is palindrome or not .
 * Compilation : gcc Ispalindrome.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 6. Assignment_1 - C Foundation.
 *
 */

#include<stdio.h>
#include<string.h> // library for strlen Function.
#include<ctype.h> // library for tolower and toupper Functions

// Function to check if a string if palindrome or not
int check_palindrome(char str[])
{    
    // low pointer.
    int lower = 0;
    // high pointer.
    int upper = strlen(str)-1;
    
    while(lower <= upper)
    {
        // character at front.
        char front = str[lower];
        // character at back.
        char back = str[upper];
        
        
        if(front == ' ' && back != ' ') // if space found at low pointer then  
        {                               // incrementing the low pointer.
        lower++;
        }
        else if(front != ' ' && back == ' ') // if space found at high pointer
        {                                    // then decrementing the high pointer.
        upper--;
        }
        else if(front == ' ' && back == ' ') // if space found at both low and high
        {                                    // pointers then incrementing low pointer
            lower++;                         // and decrementing high pointer.
            upper--;
        }
        else if(tolower(front) != tolower(back))  // if the lower case of both characters
        {                                         // are not equal , return false.
        return 0;
        }
        else                                 // else incrementing the low pointer       
        {                                    // and decrementing the high pointer.
            lower++;
            upper--;
        }
    }
    // returning true if string is palindrome.
    return 1;
    
}



int main()
{
    printf("Enter your string \n");

    char str[100];
    // scanning string
    scanf("\n%[^\n]s", str);

    // calling function check_palindrome to return 1 or 0.
    int answer = check_palindrome(str);

    // printing the answer True if string is palindrome else False.
    if(answer == 1)
    {
    printf("True\n");
    }
    else
    {
    printf("False\n");
    }

    return 1;
}
