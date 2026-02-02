//Project Name: ATM Simulator
//Created By: MD Rakibul Islam

#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;
    do {
        printf("\n1. Check Balance");
        printf("\n2. Deposit");
        printf("\n3. Withdraw");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Balance: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;
            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient balance\n");
                break;
            case 4:
                printf("Thank you\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } 
    while (choice != 4);
    return 0;
}
