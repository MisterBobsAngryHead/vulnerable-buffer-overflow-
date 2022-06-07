#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;
  int buffer[8]; //note that array is hard set to 8 integers
  int num;
  
  printf{"\nEnter the number of integers in the array:"};
  scanf("%d", &num);
  
  //for loop sanitizes user input, commenting out results in a buffer overflow if buffer > 8
  
  if (num > 8) 
  {
    printf("You entered a value greater than the array size.");  
    exit(0);
  }
  
  printf("\nEnter the values in the array:");
  for (i = 0; i < num; i++)
  {
    scanf("%d", &buffer[i]);
  }
  
  for (i = 0; i < num; i++)
  {
    printf("\nbuffer[%d} = %d", i, buffer[i]);
  }
  
  return(0);
}
