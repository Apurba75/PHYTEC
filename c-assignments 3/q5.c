/*Write a program to calculate the sum of the first and the second last digit of
a 5 digit number entered from the keyboard.*/



#include<stdio.h>
int main()
{
  int n,r,sum;
  printf("Enter a five digit number: ",n );
  scanf("%d",&n);
  int b=n/10;
  int c=b%10;
  while(n>0)
  {
    r=n%10;
    n=n/10;
  }
  sum= c+r;
  printf("The sum of the first and the second last digit of a 5 digit number= %d\n ",sum );
    return 0;
}