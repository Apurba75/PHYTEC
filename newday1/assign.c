/*program is for assignment operator*/
#include<stdio.h>
int a=20;
int main()
{
    int a =20;
    printf("%d\n",a);
    {
    int a =30;
    printf("%d\n",a);
    }
   printf("%d\n",a); 
}