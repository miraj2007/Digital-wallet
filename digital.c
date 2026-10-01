#include <stdio.h>

int main()
{
    float balance = 1000, amount;
    int choice;

    printf("Digital Wallet\n");
    printf("1. Check Balance\n");
    printf("2. Add Money\n");
    printf("3. Send Money\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Balance = %.2f", balance);
    }
    else if(choice == 2)
    {
        printf("Enter amount: ");
        scanf("%f", &amount);

        balance = balance + amount;

        printf("Balance = %.2f", balance);
    }
    else if(choice == 3)
    {
        printf("Enter amount: ");
        scanf("%f", &amount);

        balance = balance - amount;

        printf("Balance = %.2f", balance);
    }
    else if(choice == 4)
    {
        printf("Thank you");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}