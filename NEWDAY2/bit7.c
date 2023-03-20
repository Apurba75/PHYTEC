#include<stdio.h>
int main()
{
    int a,i,j,k,l,m;
    printf("Enter a number:",a);
    scanf("%d",&a);
    printf("Binary form of %d is ",a);
    for(i=7;i>=0;i--)
    {
        int j= (a>>i) & 0x1;
        printf("%d",j);
    }
    m=~a;
    printf("\n1s complement  of %d is ",a);
    for(k=7;k>=0;k--)
    {
        int l= (m>>k) & 0x1;
        printf("%d",l);
    }
    return 0;
}