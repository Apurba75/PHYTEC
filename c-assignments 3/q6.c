/*Write a program to calculate the sum of the digits of a 3-digit number which is
entered from keyboard.
E.g.- INPUT : 132 OUTPUT : 6*/



#include<stdio.h>
int main()
{
  int n,r,sum=0;
  printf("Enter a three digit number: ",n );
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=sum+r;
  }
  printf("The sum of the digits of a 3-digit number= %d ",sum );
    return 0;
}