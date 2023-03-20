//program to check positive or negative number

// leap year
#include<stdio.h>
int main()
{
    int a,n,c=0;
    printf("Enter a number to print natural no till it:",n);
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
            c=c+a;
    }
    printf("Sum  is %d.\n",c);
    return 0;
}
