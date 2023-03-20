//program to check whether the no. is pallindrome or not
//usage:for loop and if...else




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
  printf("The reverse of %ld is %ld.\n",s,rev);
  if(rev==s)
    {
        printf("%ld is pallindrome.",s);
    }
    else
    {
        printf("%ld is not pallindrome.",s);
    }
return 0;
}
