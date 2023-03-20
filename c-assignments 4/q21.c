//program to find the gcd of two numbers
//usage:for loop


#include <stdio.h>
int main() {

  int a,b,i,c;
  printf("Enter the first number: ",a);
  scanf("%d", &a);
  printf("Enter the first number: ",b);
  scanf("%d", &b);
  for (i = 1; i <= a && i<=b; i++) 
  {
    if(a % i==0 && b % i == 0)
    c=i;
  }
  printf("GCD of %d and %d is %d",a,b,c);
  return 0;
}