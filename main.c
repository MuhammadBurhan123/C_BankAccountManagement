#include <stdio.h>

int main() {
    int exit = 0;
    float accountBalance = 12000.0;  
    int selectedAction;
    float transactionAmount;

    do {
        printf("******** Welcome to your Bank Account ********\n\n");
        printf("Please select what you want to do.\n 1 - Deposit Money\n 2 - Withdraw Money\n 3 - Check Balance\n 4 - Exit\n");
        scanf("%d", &selectedAction);

        switch (selectedAction) {
            case 1:
                printf("Enter the amount to deposit: Rs.");
                scanf("%f", &transactionAmount);

                if (transactionAmount < 0) {
                    printf("Invalid input. Please enter a valid positive amount.\n\n");
                    continue;
                }
                
                accountBalance += transactionAmount;
                printf("Deposit successful. Current balance: Rs.%.2f\n\n", accountBalance);
                break;
            case 2:
                printf("Enter the amount to withdraw: Rs.");
                scanf("%f", &transactionAmount);

                if (transactionAmount < 0 || transactionAmount > accountBalance) {
                    printf("Invalid input. Please enter a valid positive amount within your account balance.\n\n");
                    continue;
                }
                accountBalance -= transactionAmount;
                printf("Withdrawal successful. Current balance: Rs.%.2f\n\n", accountBalance);
                break;
            case 3:
                printf("Current balance: Rs.%.2f\n\n", accountBalance);
                break;
            case 4:
                printf("Exiting Program. Goodbye!\n\n");
                exit = 1;
                break;
            default:
                printf("Unknown Error, please try again\n\n");
                break;
        }
    } while (exit == 0);

    return 0;
}
