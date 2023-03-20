/*Write a C program to convert a given integer (in days) to years, months and days, 
assumes that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)*/

#include<stdio.h>
int main()
{
    int d;
    printf("Input no. of days: ",d);
    scanf("%d",&d);
    int Y=d/365;
    int M=(d-(Y*365))/30;
    int D=(d-((Y*365)+(M*30)));
    printf("%d Year(s)\n",Y);
    printf("%d Month(s)\n",M);
    printf("%d Day(s)",D);

 return 0;
}