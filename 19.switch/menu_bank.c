#include <stdio.h>
#include <stdlib.h>//exit()
#include <stdbool.h>//bool value


int main()
{   
    double balance = 0;//stan konta
    double amount = 0; //wartosc dodawana lub odejmowa z konta

    int choice = 0; 

    while (true)
    {
        printf("1) Deposit(wplata)\n");
        printf("2) Withdraw(wyplata)\n");
        printf("3) Print balance(stan konta)\n");
        printf("4) Print balance and Quit\n");
        printf("5) Quit(stan konta)\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);
            balance += amount;
            break;

            case 2:
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
            balance -= amount;
            break;

            case 3:
            printf("Your balance: %.2f\n", balance);
            break;

            case 4:
            printf("Your balance: %.2f\n", balance);
            //exit(0); not necessary - in case 5 we have quit
            //without break it goes to case 5

            case 5:
            exit(0);
        }
    }
    
    return 0;
}
