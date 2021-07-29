/**
 * Program to write a function reverse(char* s)  that reverses the character string.
 * Compilation : gcc Reversestring.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 8. Assignment_1 - C Foundation.
 *
 */


#include<stdio.h>
#include<string.h> // library for strlen function.

// Function to reverse a given string.
void reverse(char *s)
{ 
    // Storing the size in sizeofstring variable.
    int sizeofstring = strlen(s);
    // low pointer.
    int lower = 0;
    // high pointer.
    int upper = sizeofstring - 1;
    
    while(lower <= upper)
    {
        // Swapping the characters at low and high pointers.
        char ch = s[lower];
        s[lower] = s[upper];
        s[upper] = ch;
        
        // incrementing the low pointer.
        lower++;
        // decrementing the high pointer.
        upper--;
    }

}

int main()
{
    int sizeofstring = 0;

    printf("First enter size of string and then your string in next line \n");

    // scanning the size of string.
    scanf("%d\n",&sizeofstring);
    
    char str[sizeofstring];
    // scanning the stirng.
    scanf("%[^\n]s", str);
    
    // calling function reverse to reverse the given string.
    reverse(str);
    
    printf("String after being reversed :\n");
    // printing the reversed string.
    printf("%s\n", str);
    
    return 1;
}

