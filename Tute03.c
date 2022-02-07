/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int x,i,total=0;
  //input
  printf("enter the number:");
  scanf("%d",&x);
 //calculations
 for(i=1;i<x+1;i++)
 {
   total=total+i;
 }
printf("the sum of the numbers :%d",total);
  
  return 0;
}

