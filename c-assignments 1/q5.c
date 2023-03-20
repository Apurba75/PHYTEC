/* Write a C program to read an amount (integer value) and break the amount into 
smallest possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00*/

#include<stdio.h>
int main()
{
    int n;
    printf("Input the amount: ",n);
    scanf("%d",&n);
    int a=n / 100;
    int b=(n-(a*100))/50;
    int c=(n-((a*100)+b*50))/20;
    int d=(n-((a*100)+b*50+(c*20)))/10;
    int e=(n-((a*100)+b*50+(c*20)+(d*10)))/5;
    int f=(n-((a*100)+b*50+(c*20)+(d*10)+(e*5)))/2;
    int g=(n-((a*100)+b*50+(c*20)+(d*10)+(e*5)+(f*2)))/1;
    printf(" %d Note(s) of 100.00\n",a);
    printf(" %d Note(s) of 50.00\n",b);
    printf(" %d Note(s) of 20.00\n",c);
    printf(" %d Note(s) of 10.00\n",d);
    printf(" %d Note(s) of 5.00\n",e);
    printf(" %d Note(s) of 2.00\n",f);
    printf(" %d Note(s) of 1.00\n",g);

return 0;
}