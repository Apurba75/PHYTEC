


#include <stdio.h>
int main() {

  int n,i;
  printf("Enter a number to see prime number till it:",n);
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i>1 && i%1==0 || i%i==0)
    {
        printf("It is a prime number.",i);
    }
    else
    {
        printf("It is not a prime number.",i);
    }
  }
return 0;
}
