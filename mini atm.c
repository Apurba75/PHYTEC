#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    double balance=0;
    double amount=0;
    int choice=0;
    while(true)
    {
        printf("1. DEPOSIT");
        printf("\n");
        printf("2. WITHDRAW");
        printf("\n");
        printf("3. CHECK BALANCE");
        printf("\n");
        printf("4. CHECK BALANCE & QUIT");
        printf("\n");
        printf("5. PRINT RECEIPT");
        printf("\n");
        printf("6. QUIT");
        printf("\n");

        printf("CHOOSE ANY OPTION: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
               printf("ENTER VALID AMOUNT: ");
               scanf("%lf",&amount);
               balance=balance+amount;
               break;
            case 2:
               printf("ENTER VALID AMOUNT: ");
               scanf("%lf",&amount);
               balance=balance-amount;
               break;
            case 3:
               printf("%.2f\n",balance);
               break;
            case 4:
               printf("%.2f\n",balance);
            case 5:
               exit(0);
        }
    }
    return 0;
}