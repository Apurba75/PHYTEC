#include<stdio.h>
int count()
{
    register int count=0;
    count++;
    printf("%d\n",count);
    printf("\naddress=%d\n",&count);
}
int main()
{
   count(); 
   count(); 
   count(); 
   count(); 
}
