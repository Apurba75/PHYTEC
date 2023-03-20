#include<stdio.h>
int main()
{
    int a,i,j,count=0;
    printf("Enter a number:",a);
    scanf("%d",&a);
    for(i=7;i>=0;i--)
    {
        int j= (a>>i) & 0x1;
        printf("%d",j);
        if(j==1)
        {
            count++;
        }
    }
    printf("\nNo of 1s in %d is %d.",a,count);
    return 0;
}