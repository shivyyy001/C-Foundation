/**
 * Program to convert a string of hexadecimal digits into its equalent integer value.
 * 
 * Compilation : gcc Hexa.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 9. Assignment_1 - C Foundation.
 *
 */


#include<stdio.h>
#include<string.h> //library to include string fuctions.

// Function to convert a string of hexadecimal digits into its equalent integer value.
void htoi(char *s)
{
    int answer = 0;
    int initial_16_power = 1;
    
    // iterating string from back.
    for(int i = strlen(s) - 1 ; i >= 0 ; i--)
    {
       // 0 , x and X are to skip .
       if(s[i] == '0' || s[i] == 'x' || s[i] == 'X')
       {
       continue;
       }
       
       // s[i] - 'W' gives the integer notation of a to f in hexadecimal ,
       // which is 10 to 15 respectively.
       else if(s[i] >= 'a' && s[i] <= 'f')
       {
           answer += ((s[i] - 'W') * initial_16_power);
       }
       
       // s[i] - '0' gives the integer notation of 0 to 9 in hexadecimal ,
       // which is 0 to 9 respectively.
       else if(s[i] >= '0'  &&  s[i] <= '9')
       {
           answer += ((s[i] - '0') * initial_16_power);
       }
       
       // s[i] - '7' gives the integer notation of A to F in hexadecimal ,
       // which is 10 to 15 respectively.
       else if(s[i] >= 'A' && s[i] <= 'F')
       {
           answer += ((s[i] - '7') * initial_16_power);
       }
       
       // increasing the initial power of 16 by 1 in each iteration , like
       // 16^0 , 16^1 ,16^2 and so on....
       initial_16_power *= 16;
    }
    
    // printing the answer which represents the integer value of 
    // string of hexadecimal digits
    printf("Integer value = %d \n" , answer);
}


int main()
{
    printf("Enter your string representing hexadecimal number \n");

    // taking input string
    char input[100];
    scanf("%s" , input);
    
    // calling the htoi function.    
    htoi(input);
    
    return 1;
}
