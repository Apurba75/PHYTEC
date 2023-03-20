//program to find the multiplication table of certain number.
//usage:for loop


#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the multiplication table ending= ",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        printf("--------------------------------------------------\n");
        printf("------multiplication table of %d-------\n",i);
        printf("--------------------------------------------------\n");
        printf("\n");
        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}