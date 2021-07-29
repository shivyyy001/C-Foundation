/**
 * Program to implement functions of strings i.e strncpy ,strncmp
 * and strncat.
 * 
 * Compilation : gcc String_funcs.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 14. Assignment_1 - C Foundation.
 *
 */


#include<stdio.h>
#include<string.h> // library to include string length function ( strlen() ).

// function to concatinate num number of characters from sourse to destination.
void __strncat(char *destination , char *source , int num)
{
    // creating an answer string to store num + length of destination number of characters.
    char answer[strlen(destination) + num + 1];
    
    // pointer to iterate upon answer string.
    int pointer = 0;
    
    // putting destination string to answer string.
    for(int i = 0 ; i < strlen(destination) ; i++)
    {
        answer[pointer] = destination[i];
        pointer++;
    }
    
    // Concatinating num characters of source string to answer string.
    for(int i = 0 ; i < num ; i++)
    {
        answer[pointer] = source[i];
        pointer++;
    }
    
    answer[pointer] = '\0';
    
    //printing the concatinated string.
    printf("Answer for __strncat function : \nAfter Concatinating %d characters from source to destination :\n" , num);
    printf("%s\n" , answer);
}



// function to copy num number of characters from sourse to destination.
void __strncpy(char *destination , char *source , int num)
{
    // Copying first num number of characters from source to destination.
    for(int i = 0 ; i < num ; i++)
    {
        destination[i] = source[i];
    }
    
    // printing the resultant string.
    printf("Answer of __strncpy function : \nAfter copying first %d characters from source to destination :\n" , num);
    printf("%s\n" , destination);
}



// function to compare num number of characters of string s1 and s2.
int __strncmp(char *s1 , char *s2 , int num)
{
    // Comparing num number of characters of strings s1 and s2
    for(int i = 0 ; i < num ; i++)
    {
        if(s1[i] != s2[i])
        {
            // returns positive if s1 is greater else negative
            return s1[i] - s2[i];
        }
    }
    
    // return 0 if num number of characters of both strings are equal.
    return 0;
}



int main()
{
    char s1[100];
    char s2[100];
    
    printf("Enter destination string \n");
    scanf("%s" , s1);
    
    printf("Enter source string \n");
    scanf("%s" , s2);
    
    int num;
    printf("Enter number of characters to operate upon (less than length of smaller string) \n");
    scanf("%d" , &num);
    
    // Calling __strncmp function :
    int answer = __strncmp(s1 , s2 , num);
    
    // printing the answer of __strcmp function.
    printf("Answer of __strcmp function on string s1 and s2 : \n"); 
    if(answer == 0)
    {
        printf("Both Strings are equal for first %d number of characters \n", num);
    }
    else if(answer > 0)
    {
        printf("First String is greater than second for first %d number of characters \n", num);
    }
    else
    {
        printf("Second String is greater than first for first %d number of characters \n", num);
    }
    
    // Calling __strncat function :
    __strncat(s1 , s2 , num);
    
    // Calling __strncpy function :
    __strncpy(s1 , s2 , num);
    
    
    return 1;
}
