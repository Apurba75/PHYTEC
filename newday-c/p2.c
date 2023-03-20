#include<stdio.h>
int main()
{
     int a=(4>5) && (5>4);
     int b=(4>5) || (5>4);
    int c=(232+23*1233) || 0;
    int d=(232+23*1233) && 0;;
     printf("%d\n",a);
     printf("%d\n",b);
     printf("%d\n",c);
     printf("%d",d);
}