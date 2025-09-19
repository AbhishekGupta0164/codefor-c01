#include <stdio.h>

int main()
{
    // int a=1;
    int amt,bal=1000,ch;
    printf("\nChoices : ");
    printf("\n1.check balance ");
    printf("\n2.deposit");
   printf("\n3.withdraw");
   printf("\nEnter choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: printf("\nThe Balance : %d",bal);
            break;
    case 2 : printf("\nEnter amount : ");
            scanf("%d",&amt);
            bal+=amt;
            printf("\nCurrent Balance : %d",bal);
            break;
    case 3 : printf("\nEnter amount: ");
            scanf("%d",&amt);
            if(amt<=bal)
            {
                bal=bal-amt;
                printf("\nWithdrawl successful\n current Balance : %d",bal);

            }
            else
            {
                printf("\nInsufficient Amount !!");
            }
   }
return 0;
}