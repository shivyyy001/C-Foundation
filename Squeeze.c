/**
 * Program to write an alternate version of squeeze(char*s1 , char* s2) ,
 * that deletes each character in s1 that matches any character in the string s2.
 *
 * Compilation : gcc Squeeze.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 10. Assignment_1 - C Foundation.
 *
 */
 
 
#include<stdio.h>
#include<string.h> // library to include strlen function.

// function to delete the characters in s1 that matches any character in s2.
void squeeze(char *s1 , char *s2)
{
    // creating a frequency array to store frequencies of characters of string s1.
    // size = 256 because there are maximum of 256 characters.
    
    int frequency_array[256] = {0};
    
    // storing frequencies of characters of string s1 in frequency_array.
    for(int i = 0 ; i < strlen(s1) ; i++)
    {
        frequency_array[(int)(s1[i])] += 1; 
    }
    
    // marking the frequency of those characters of string s1 as 0 which match with any character
    // in string s2
    for(int i = 0 ; i < strlen(s2) ; i++)
    {
        frequency_array[(int)(s2[i])] = 0; 
    }
    
    // printing the left out characters of string s1 which are not present in string s2.
    for(int i = 0 ; i < strlen(s1) ; i++)
    {
        // frequency_array[(int)(s1[i])] != 0 means that character is not present in string s2.
        if(frequency_array[(int)(s1[i])] != 0)
        {
            printf("%c" , s1[i]);
        }
    }
    
    printf("\n");    
}

int main()
{
    char s1[100];
    char s2[100];
    
    printf("Enter 2 strings\n");    
    // scanning the 2 strings.
    scanf("%s" ,s1);
    scanf("%s" ,s2);
    
    // calling the squeeze function .
    squeeze(s1 , s2);

    return 1;
}



