/*Write a C program that accepts two item’s weight (floating points' values ) and
number of purchase (floating points' values) and calculate the average value of the items.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444*/
#include<stdio.h>
int main()
{
    float w1,i1,w2,i2;
    float a;
    printf("Weight - Item1: ",w1);
    scanf("%f",&w1);
    printf("No. of item1:: ",i1);
    scanf("%f",&i1);
    printf("No. of item2:: ",w2);
    scanf("%f",&w2);
    printf("No. of item2:: ",i2);
    scanf("%f",&i2); 
    a = ((w1*i1)+(w2*i2))/(i1+i2);
    printf("Average Value = %f\n",a);
return 0;
}
