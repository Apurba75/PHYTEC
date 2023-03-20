//largest number among three numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",a);
    scanf("%d",&b);
    printf("Enter third number:",a);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is the largest number.",a);
    }
    else if(b>a && b>c)
    {
     printf("%d is the largest number.",b);   
    }
    else
    {
     printf("%d is the largest number.",c);   
    }
}