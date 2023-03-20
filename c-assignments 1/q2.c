#include<stdio.h>
int main()
{
   int d,M;
   printf("Enter days:\n",d);
   scanf("%d",&d);
   int Y=d/365;
   int W=(d-(Y*365))/7;
   int D=(d-((Y*365)+(W*7)));
   printf("Year=%d\n",Y);
   printf("Week=%d\n",W);
   printf("Day=%d\n",D);
    return 0;
}