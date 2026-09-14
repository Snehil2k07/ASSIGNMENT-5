#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount, rate, interest;

    do
    {
        printf("\n----- BANK MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Deposit successful.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("Withdrawal successful.\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient balance.\n");
                }
                break;

            case 4:
                printf("Enter annual interest rate: ");
                scanf("%f", &rate);

                if (rate >= 0)
                {
                    interest = (balance * rate * 1) / 100;
                    printf("Annual Simple Interest = Rs. %.2f\n", interest);
                }
                else
                {
                    printf("Invalid interest rate.\n");
                }
                break;

            case 5:
                printf("Thank you for using the banking system.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}