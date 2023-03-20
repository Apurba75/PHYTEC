//C Program to Find the Size of int, float, double and char

#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("Size of integer is %d byte.\n",sizeof(i));
    printf("Size of float is %d byte.\n",sizeof(f));
    printf("Size of double is %d byte.\n",sizeof(d));
    printf("Size of char is %d byte.",sizeof(c));
}