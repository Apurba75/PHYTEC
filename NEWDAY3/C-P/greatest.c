//program to check alphabet or not

// leap year
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no. :",a);
    scanf("%d",&a);
    printf("Enter second no. :",b);
    scanf("%d",&b);
    printf("Enter third no. :",c);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is largest.",a);
    }
    else if(a<b && c<b)
    {
        printf("%d is largest.",b);
    }
    else
    {
        printf("%d is largest.",c);
    }
    return 0;
}
