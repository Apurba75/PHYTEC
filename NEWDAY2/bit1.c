#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a number:",a);
    scanf("%d",&a);
    for(i=9;i>=0;i--)
    {
        int j= (a>>i) & 0x1;
        if(i==2)
        {
            printf("Position: %d\n",i);
            printf("Binary of given number is: %d\n.",j);
        }
    }
    return 0;
}