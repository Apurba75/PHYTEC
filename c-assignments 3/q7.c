/*Write a program to reverse a 3-digit number which is entered from keyboard.
 E.g.- INPUT : 132 OUTPUT : 231*/



#include<stdio.h>
int main()
{
  int n,r,rev=0;
  printf("Enter a three digit number: ",n );
  scanf("%d",&n);
  while(n>0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  printf("The reverse of the digits of a 3-digit number= %d ",rev );
    return 0;
}