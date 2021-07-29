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
    // creating a frequency array of size 256 as we have total 256 characters .
    int frequency_map[256]={0};
    
    // storing frequency of every character of string s2.
    for(int i = 0 ; i < strlen(s2) ; i++)
    {
        frequency_map[(int)(s2[i])]++;
    }
    
    // finding first position of such character in string s1 
    // whose frequency in s2 is non zero. 
    for(int i = 0 ; i < strlen(s1) ; i++)
    {
        if(frequency_map[(int)(s1[i])]!=0)
        return i;
    }
    
    // if no character of string 2 is present in string 1 then returning -1.
    return -1;
 
}
int main()
{
    char s1[100];
    char s2[100];
    
    // scanning the 2 strings.
    printf("Enter string 1 \n");
    
    scanf("%s" ,s1);
    
    printf("Enter string 2 \n");
    scanf("%s" ,s2);
    
    // calling the any function .
    int answer = any(s1 , s2);
       
    // printing the answer , the first location of any character of string s2 in string s1,
    // or -1 if no character is present.
    printf("Present index = %d \n", answer);
    
    return 1;

}
