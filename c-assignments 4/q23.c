//program to display no of digits in an integer
//usage:for loop




#include <stdio.h>
int main() {

  long int a,r,count;
  printf("Enter an integer: ",a);
  scanf("%ld", &a);
  int s=a;
  for (count=0; a != 0; count++) 
  {
    a=a/10;
  }
printf("The no of digits in %ld is %ld.",s,count);
return 0;
}

