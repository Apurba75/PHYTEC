#include<stdio.h>
int main()
{
    int d1,d2,d3,d4;
    printf("Enter the pin:  ",d1,d2,d3,d4);
    scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
    if(d1<=9 && d1>=0)
    {
        printf("%d",d1);
    }
    else if (d2<=9 && d2>=0)
    {
        printf("%d",d2);
    }
    else if (d3<=9 && d3>=0)
    {
        printf("%d",d3);
    }
    else if (d4<=9 && d4>=0)
    {
        printf("%d",d4);
    }
    else
    {
        printf("Invalid pin!");
    }
    printf("\nYour pin is  %d-%d-%d-%d ",d1,d2,d3,d4);
    return 0;
}