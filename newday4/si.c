#include<stdio.h>
int set1(int p1,float r1,int t1 );
{
    return (p1*t1*r1)/100;
}
int set2(int p2,float r2,int t2);
{
    return (p2*t2*r2)/100;
}
int set3(int p3,float r3,int t3);
{
    return (p3*t3*r3)/100;
}
int main()
{
    int a,b,c,d,e,f,g,h,i;
    printf("Enter first principal:",a);
    scanf("%d",&a);
    printf("Enter second principal:",a);
    scanf("%d",&d);
    printf("Enter third principal:",a);
    scanf("%d",&g);
    printf("Enter first rate:",b);
    scanf("%f",&b);
    printf("Enter second rate:",e);
    scanf("%f",&e);
    printf("Enter third rate:",h);
    scanf("%f",&h);
    printf("Enter first time:",c);
    scanf("%d",&c);
    printf("Enter second time:",f);
    scanf("%d",&f);
    printf("Enter third time:",i);
    scanf("%d",&i);
    printf(" first SI: %d ",set1(a,b,c));
    printf(" second SI: %d ",set2(d,e,f));
    printf(" third SI: %d ",set3(g,h,i));
    
}