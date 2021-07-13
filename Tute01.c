/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int x ,y,sum=0;
  float avg=0;

  printf("Enter num 1: ");
  scanf("%d",& x);
   printf("Enter num 2: ");
  scanf("%d",& y); 

  sum= x+y;
  avg=sum/2.0;

  printf("averge is :%.2f",avg);
  
  
  return 0;
}

