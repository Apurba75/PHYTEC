//largest number among three numbers

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter first number:",a);
    scanf("%d",&a);
    printf("Enter second number:",a);
    scanf("%d",&b);
    printf("Enter third number:",a);
    scanf("%d",&c);
    printf("Equation is %dx^2 + %dx + %d = 0\n",a,b,c);  
    
    if((b^2-4*a*c) > 0)
    {
        int d= (-b+sqrt(b^2-4*a*c))/2*a;
        int e= (-b-sqrt(b^2-4*a*c))/2*a;
        printf("1st root is %d.",d);
        printf("\n2nd root is %d.",e);
    }
    else if((b^2-4*a*c) == 0)
    {
        int g= -b/2*a;
        printf("Root is %d.",g);
    }
    else
    {
        int real= -b/2*a;
        int img= (sqrt(-(b^2-4*a*c)))/2*a;
        printf("Roots are %d + %d i and %d - %di.",real,img,real,img);
    }
}