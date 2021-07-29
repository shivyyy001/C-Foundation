/**
 * Program  to return the position of the rightmost occurrence of t in s,
 * or - 1 if there is none .
 * 
 * Compilation : gcc Strindex.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 12. Assignment_1 - C Foundation.
 *
 */
 
 
#include<stdio.h>
#include<string.h> // library to include strlen function.

// function to return the position of the rightmost occurrence of t in s.
int strrindex(char *s , char *t)
{
    // if length of string t is greater than length of string s return -1.
    if(strlen(t)>strlen(s))
    return -1;
    
    // iterating string s from behind.
    for(int i = strlen(s) - 1 ; i >= 0 ; i--)
    {
        // flag variable to check if string t is present in s or not.
        int flag = 1;
        
        // index variable to iterate string s from behind.
        int index = i; 
        
        for(int j = strlen(t) - 1 ; j >= 0 ; j--)
        {
            // if characters dont match then making flag = 0 
            if(t[j] != s[index])
            {
                flag = 0;
                break;
            }
            
            // decrementing the index
            index--;
        }
        
        // if flag == 1 means we have found an occurence of t in s at position index + 1.        
        if(flag == 1)
        {
            // returning the rightmost occurence of string t in s.
            return index + 1;
        }
    }
    
    // return -1 in case string t is not present in s
    return -1;
 
}

int main()
{
    char s[100];
    char t[100];
    
    printf("Enter two strings in different lines \n");
    // scanning the 2 strings.
    scanf("%s" ,s);
    scanf("%s" ,t);
    
    // calling the strrindex function .
    int answer = strrindex(s , t);
    
    // printing the answer either the rightmost Occurence of t in s or -1 if not present .
    printf("Rightmost Occurence = %d\n", answer);
    
    return 1;
}
