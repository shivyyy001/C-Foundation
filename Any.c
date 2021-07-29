/**
 * Program which returns the first location in the string1 where any character from the string2 occurs, 
 * or -1 if s1 contains no characters from s2
 *
 * Compilation : gcc Any.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 11. Assignment_1 - C Foundation.
 *
 */
 
 
#include<stdio.h>
#include<string.h> // library to include strlen function.

// function to return the first location in string s1 where any character from string s2 
// occurs or -1 otherwise.
int any(char *s1 , char *s2)
{
    // iterating the string 2.
    for(int i = 0 ; i < strlen(s2) ; i++)
    {
        // iterating the string 1.
        for(int j = 0 ; j < strlen(s1) ; j++)
        {
            // if any character of string 2 is found in string 1 returning that position in string1 .
            if(s2[i] == s1[j])
            return j;
        }
    }
    
    // if no character of string 2 is present in string 1 then returning -1.
    return -1;
 
}
int main()
{
    char s1[100];
    char s2[100];
    
    printf("Enter 2 strings\n");

    // scanning the 2 strings.
    scanf("%s" ,s1);
    scanf("%s" ,s2);
    
    // calling the any function .
    int answer = any(s1 , s2);
    
    // printing the answer , the first location of any character of string s2 in string s1,
    // or -1 if no character is present.
    printf("%d\n", answer);
    
    return 1;
}

