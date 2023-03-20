/*C Program to Check Whether a Number is Positive or Negative*/

#include<stdio.h>
int main()
{
    int n;
    printf("Input an integer: ",n);
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d is negative .",n);
    }
    else if(n>0)
    {
       printf("%d is positive .",n);
    }
    else
    {
       printf("%d is neither positive nor negative.",n);
    }
    return 0;
}