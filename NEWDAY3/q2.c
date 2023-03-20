/*program is evaluate no.%2==0 then even else odd
usage:conditional operator
*/
#include<stdio.h>
int main()
{
    int a,b;
    char even;
    char odd;
    printf("Enter first number:",a);
    scanf("%c",&a);
    char c=a%2==0?even:odd;
    printf("The number  is %c.",c);
    return 0;
}