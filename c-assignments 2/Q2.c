//C Program to Swap Two decimal Number

#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter First number: ",a);
    scanf("%d",&a);
    printf("Enter Second number: ",b);
    scanf("%d",&b);
    n=a;
    a=b;
    b=n;
    printf("------After swapping-----\n");
    printf("First number is %d.\n",a);
    printf("Second number is %d.\n",b);
 return 0;
}
