
/*Write a C program that accepts two integers from the user and calculate the sum
of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63*/
#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Input first Integer:\n",a);
  scanf("%d",&a);  
  printf("Input second Integer:\n",b);
  scanf("%d",&b); 
  sum=a+b;
  printf("Sum of the above two integers = %d",sum);
return 0;
}