#include<stdio.h>
int main()
{
    int i;
    long int li;
    short int Si;
    signed int si;
    unsigned int ui;
    long double ld;
    float f;
    double d;
    char c;
    printf("Size of integer is %d byte.\n",sizeof(i));
    printf("Size of long int is %d byte.\n",sizeof(li));
    printf("Size of long int is %d byte.\n",sizeof(Si));
    printf("Size of signed int is %d byte.\n",sizeof(si));
    printf("Size of unsigned int is %d byte.\n",sizeof(ui));
    printf("Size of char is %d byte.\n",sizeof(c));
    printf("Size of float is %d byte.\n",sizeof(f));
    printf("Size of double is %d byte.\n",sizeof(d));
    printf("Size of long double is %d byte.",sizeof(ld));
}