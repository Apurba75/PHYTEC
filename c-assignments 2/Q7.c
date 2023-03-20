/* Write a C program to check whether a given integer is positive even, negative even, 
positive odd or negative odd. Print Zero if the number is 0.
Test Data :
Input an integer: 13 */

#include<stdio.h>
int main()
{
    int n;
    printf("Input an integer: ",n);
    scanf("%d",&n);
    if (n<0 && n % 2 ==0)
    {
        printf("%d is negative even.",n);
    }
    else if(n>0 && n % 2== 0)
    {
        printf("%d is positive even.",n);
    }
    else if (n<0 && n % 2 != 0)
    {
        printf("%d is negative odd.",n);
    }
    else if(n>0 && n % 2 != 0)
    {
        printf("%d is positive odd.",n);
    }
    else
    {
       printf("0");
    }
    return 0;
}