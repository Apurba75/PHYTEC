#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the temperature of sunday= ",a);
    scanf("%f",&a);
    printf("Enter the temperature of Monday= ",b);
    scanf("%f",&b);
    printf("Enter the temperature of Tuesday= ",c);
    scanf("%f",&c);
    if(c>=a && c<=b)
    {
        printf("emperature is ok. It will be good for picnic.");
    }
    else if (c>=b && c>=a)
    {
        printf("Temperature is very hot today. Worry about yourself!");
    }
    else
    {
        printf("It will be severe cold");
    }
    return 0;
}