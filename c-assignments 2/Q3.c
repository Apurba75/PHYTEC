//Swap Numbers Without Using Temporary Variables

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter First number: ",a);
    scanf("%d",&a);
    printf("Enter Second number: ",b);
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("------After swapping-----\n");
    printf("First number is %d.\n",a);
    printf("Second number is %d.\n",b);
  return 0;
}