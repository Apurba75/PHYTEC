#include <stdio.h>
#include<math.h>
int main() {

  long int a,i,b;
  printf("Enter an number to print power till it: ",a);
  scanf("%ld", &a);
  int s=a;
  for (i=1; i <= a; i++) 
  {
    b=pow(i,2);
  }
printf("The power of numbers till %ld is %d.",a,b);
return 0;
}
