/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //declaring variables
  int marks1,marks2,total;
  float average;
  //getting inputs
  printf("enter the marks 1: ");
  scanf("%d",&marks1);

  printf("enter the marks 2: ");
  scanf("%d",&marks2); 
  if(marks1>=0&&marks2<=100&&marks1<=100&&marks2>=0)
  {
 //calculating the total
  total=marks1+marks2;
//calculating the average
  average=total/2.0;
  //displaying the output
printf("the average is:%.2f",average);
  }

else printf("invalid entry");



  return 0;
}

