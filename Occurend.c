/**
 * Program to write the function strend(char *s , char* t) , which returns 1 , 
 * if the string t occurs at the end of the string s, and zero otherwise.
 * 
 * Compilation : gcc Occurend.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 13. Assignment_1 - C Foundation.
 *
 */
 
 
#include<stdio.h>
#include<string.h> // library to include strlen function.

// function to check if string t is present at end of string s or not.
int strend(char *s , char *t)
{
    // if length of string t is greater than length of string s return 0.
    if(strlen(t)>strlen(s))
    return 0;
    
    // iterator to iterate string s from behind. 
    int back_iterator_for_s = strlen(s) - 1;
    
    // iterating string t and s from behind to check if t is present at back of s or not.
    for(int i = strlen(t) - 1 ; i >= 0 ; i--)
    {
      // returning 0 if not matched.
      if(t[i] != s[back_iterator_for_s])
      return 0;
       
      // decrementing the iterator_for_s .
      back_iterator_for_s--;
    }
    
    // returning 1 indicating string t is present at back of string s.
    return 1;
 
}
int main()
{
    char s[100];
    char t[100];
    
    // scanning the 2 strings.
    printf("Enter string 1\n");
    scanf("%s" ,s);
    printf("Enter string 2\n");
    scanf("%s" ,t);
    
    // calling the strend function .
    int answer = strend(s , t);
    
    // printing the answer either 0 or 1.
    printf("%d\n", answer);
    
    return 1;
}
 
