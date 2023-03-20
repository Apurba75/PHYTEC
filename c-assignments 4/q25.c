//program to display reverse of an integer
//usage:for loop




#include <stdio.h>
int main() {

  long int a,i,r,rev;
  printf("Enter an integer: ",a);
  scanf("%ld", &a);
  int s=a;
  for (rev=0; a != 0; ) 
  {
    r=a%10;
    rev=rev*10+r;
    a=a/10;
  }
printf("The reverse of %ld is %ld.",s,rev);
return 0;
}
