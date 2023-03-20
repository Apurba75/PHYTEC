//C Program to Swap Two decimal Number

#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter First number: ",a);
    scanf("%d",&a);
    printf("Enter Second number: ",b);
    scanf("%d",&b);
    if(a>b)
    {
    n=a;
    a=b;
    b=n;
    printf("------After swapping-----\n");
    printf("First number is %d.\n",a);
    printf("Second number is %d.\n",b);  
    }
    else if(a==b)
    {
        printf("It cannot be swapped.Please enter two different numbers."); 
    }
    else
    {
        printf("It cannot be swapped.");
    }
 return 0;
}
