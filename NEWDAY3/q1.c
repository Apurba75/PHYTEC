/*program is to find the greatest no. between two numbers
usage:conditional operator
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",a);
    scanf("%d",&b);
    int c=a>b?a:b;
    printf("The greatest number is %d.",c);
    return 0;
}