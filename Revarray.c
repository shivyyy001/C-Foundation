/**
 * Program to reverse the given 1 D array .
 * Compilation : gcc Revarray.c
 * Execution : ./a.out 
 *
 * @Shivansh Kaushal ( 1910990128 )  , 25/7/2021
 * Ques 4. Assignment_1 - C Foundation.
 *
 */

#include<stdio.h>
   
//Function to reverse the given array
void reverse_array(int *array , int num_of_elements)
{
  // low pointer.
  int lower = 0;
  // high pointer.
  int upper = num_of_elements - 1;
  
  while(lower <= upper)
  {
      // Swapping elements at low and high pointers.
      int temporary = array[lower];
      array[lower] = array[upper];
      array[upper] = temporary;
      
      // increasing the low pointer.
      lower++;
      // decreasing the high pointer.
      upper--;
  }
}

int main()
{
    int num_of_elements = 0;
    printf("Enter number of elements in array \n");

    // scanning the number of elements in array.
    scanf("%d", &num_of_elements);
    
    printf("Enter array elements \n");

    // Making and scanning the array of size =  num_of_elements.
    int array[num_of_elements];
    for(int iterator = 0 ; iterator < num_of_elements ; iterator++)
    {
        scanf("%d", &array[iterator]);
    }
    
    // Calling reverse_array function to reverse the given array.
    reverse_array(array , num_of_elements);
    
    // printing the reversed array .

    printf("The reversed array is : \n");
    for(int iterator = 0 ; iterator < num_of_elements ; iterator++)
    {
        printf("%d ", array[iterator]);
    }
    
    printf("\n");

    return 1;
}
