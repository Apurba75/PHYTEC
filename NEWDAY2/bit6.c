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
        printf("\n---------After swapping-------------\n");

    b=a ^ b;
    a=a ^ b;
    b=a ^ b;
    printf("The first number will be %d\n",a);
    printf("The SECOND number will be %d",b);
    return 0;
}