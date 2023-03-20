//C Program to Compute Quotient and Remainder

#include<stdio.h>
int main()
{
  int D,d;
  printf("Dividend = ",D);
  scanf("%d",&D);
  printf("Divisor  = ",d);
  scanf("%d",&d);
  int q= D / d;
  int r=D-(d*q);
  printf("Quotient = %d\n",q);
  printf("Remainder =%d\n",r);

  return 0;
}