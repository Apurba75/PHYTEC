//program to check alphabet or not

// leap year
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:",a);
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("%c is Uppercase alphabet.",a);
    }
    else if(a>=97 && a<=122)
    {
        printf("%c is lowercase alphabet.",a);
    }
    else
    {
        printf("%c is is not an alphabet.",a);
    }
    return 0;
}
