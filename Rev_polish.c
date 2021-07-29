/**
 * Program to evaluate a Reverse Polish expression ,
 * where each operator or operand is a separate argument.
 * 
 * Compilation : gcc Rev_polish.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 15. Assignment_1 - C Foundation.
 *
 */



#include <stdio.h>
#include <stdlib.h>  // standard library.
#include <string.h> // library to include string functions.

/* Stack implementation starts here */ 

// Stack of size 600 by default.
long long int stack[600];

int size = 0;  // initial stack size = 0.

// function to return size of stack.
int getsize()
{
    return size;
}

// function to pop last added element from stack.
void pop()
{
    if(size == 0)
    return ;
    size--;
}

// function to add an element into stack.
void push(int ele)
{
    size++;
    if(size == 600)
    return;
    else
    stack[size] = ele;
}

// function to only get the last added element from stack , but not to remove it .
int top()
{
    return stack[size];
}


/* Stack implementation ends here */ 



int main() 
{
    
    printf("Enter number of tokens in expression \n");

    // Taking the number of tokens from user
    int number_of_tokens;
    scanf("%d" , &number_of_tokens);
    
    printf("Enter your tokens \n");

    for(int i = 0 ; i < number_of_tokens ; i++)
    {
        char str[400];
	    
        // taking a token (from expression) as input one by one .
        scanf("%s", str);

        int firstnum = 0, secondnum = 0;
        
        // if current token is + then add two numbers and push in stack.
        // comparing using strcmp function
        if(strcmp(str,"+") == 0)
        {
            if(getsize() >= 2)
            {
              firstnum = top();
              pop();
              secondnum = top();
              pop();
            }
           
            push(firstnum + secondnum);
        }
        
        // if current token is * then multiply numbers and push in stack.
        // comparing using strcmp function
        else if(strcmp(str,"*") == 0)
        {
            if(getsize() >= 2)
            {
              firstnum = top();
              pop();
              secondnum = top();
              pop();
            }
            push(firstnum * secondnum);
        }
        
        // if current token is / then divide two numbers and push in stack.
        // comparing using strcmp function
        else if(strcmp(str,"/") == 0)
        {
            if(getsize() >= 2)
            {
              firstnum = top();
              pop();
              secondnum = top();
              pop();
            }
            push(secondnum / firstnum);
        }
        
        // if current token is - then subtract two numbers and push in stack.
        // comparing using strcmp function
        else if(strcmp(str,"-") == 0)
        {
            if(getsize() >= 2)
            {
              firstnum = top();
              pop();
              secondnum = top();
              pop();
            }
            push(secondnum - firstnum);
        }

        else
        {
            // else convert the current token to a number using atoi() function,
            // and push the number in stack.
            int answer = atoi(str);
            push(answer);
        }
   
	}
	
    // printing the answer which is the only element left in stack.
    printf("%d \n", top());
    
    return 1;

}
