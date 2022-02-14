/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int m1,m2,total;
   float average=0;

   printf("Enter the mark 1 :");
   scanf("%d",&m1);

   printf("Enter the mark 2 :");
   scanf("%d",&m2);

   total = m1 + m2;
   average = total / 2;

   printf("Average is %.2f",average);
   
  return 0;
}

