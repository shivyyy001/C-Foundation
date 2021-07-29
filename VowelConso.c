
/**
 * Program to count number of vowels and consonants in given string .
 * Compilation : gcc VowelConso.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 3. Assignment_1 - C Foundation.
 *
 */

#include<stdio.h>

int main()
{
    int sizeofstring = 0;

    printf("First enter size of string and then your string in next line : \n");

    // scanning the size of string.
    scanf("%d\n", &sizeofstring);
    
    char str[sizeofstring];
    // scanning a string which breaks at a new line having size = sizeofstring.
    scanf("%[^\n]s",str);
    
    // initializing vowels and consonants to 0.
    int vowels = 0;
    int consonants = 0;
    
    for(int iterator = 0 ; iterator < sizeofstring ; iterator++)
    {
        // Checking the condition for vowels using if else.
        if(str[iterator]=='a' || str[iterator]=='e' || str[iterator]=='i' || str[iterator]=='o' || str[iterator]=='u')
	{
        vowels++;
	}
        else if(str[iterator]=='A' || str[iterator]=='E' || str[iterator]=='I' || str[iterator]=='O' || str[iterator]=='U')
	{
        vowels++;
	}
        else // If the character is not a vowel then it is consonant.
	{
        consonants++;
	}
    }
    
    // printing the number of Vowels and consonants
    printf("Vowels = %d , Consonants = %d\n", vowels , consonants);
    
    return 1;
}

