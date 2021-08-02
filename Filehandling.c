/**
 * Program to print all input lines from file which are longer than 80 characters.
 *
 * Compilation : gcc Filehandling.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 7. Assignment_1 - C Foundation.
 *
 */


#include <stdio.h>

int main() 
{
    // Making a file pointer
    FILE *ptr;
	
    // Opening a file using fopen and passing first parameter as filename ,
    // and second parameter as "r" to only read this file.
    ptr = fopen("abc.txt","r");
	
    // checking if ptr is NULL or not. If its NULL , file cant be opened.
    if (!ptr) 
    {
        printf("File cant be opened \n");
    }
    
    // else if its not NULL , then doing the given task here ->
    else
    {
    // initializing a current character named current_char.
    char current_char;
    
    // Reading file till current_char is not at end of file.
    while(current_char!=EOF) 
    {
        // creating a temporary character array arr to store lines with length > 80.
        char arr[2000];
        // initializing the current index of a line to 0.
	int index = 0;
		
	// getting the current character using fgetc function ,which returns EOF when end of file is reached,
	// else it returns character which is currently pointed to.
	current_char = fgetc(ptr);
		
	// Looping till current_char has not reached end of file.
	while(current_char != EOF)
	{
	    // storing the current character in character array.
	    arr[index++] = current_char;
		    
            // getting the next character from file.
	    current_char = fgetc(ptr);
			
	    // if current_char reaches end of a line then breaking.
	    if(current_char == '\n')
	    {
	        break;
	    }
	}
		
	// if index  > 80 means if length of current line is > 80 then printing. 
	if(index > 80) 
	{
	    for(int i = 0; i < index; i++)
	    {
	        printf("%c", arr[i]);
 	    }
	    printf("\n");
	}
		
    }
	
    //closing the file using fclose.
    fclose(ptr);

    }
    
    return 1;
}
