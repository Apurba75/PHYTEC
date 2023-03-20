//program to find the power of a numbers
//usage:for loop



#include <stdio.h>
int main() {
    int base, exp;
    int result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %d", result);
    return 0;
}
