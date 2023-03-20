#include<stdio.h>
int main()
{
    int a,b,i,j,k,l;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",b);
    scanf("%d",&b);
    printf("---------binary form of first number-------------\n");
    printf("Binary form of %d is ",a);
    for(i=7;i>=0;i--)
    {
        int j= (a>>i) & 0x1;
        printf("%d",j);
    }
        printf("\n---------binary form of Second number-------------\n");
         printf("Binary form of %d is ",b);
    for(k=7;k>=0;k--)
    {
        int l= (b>>k) & 0x1;
        printf("%d",l);
    }
        printf("\n---------bitwise and and or operation-------------\n");

    int n=a & b;
    int m=a | b;
    printf("a & b= %d\n",n);
    printf("a | b= %d\n",m);

    return 0;
}