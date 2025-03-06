#include <stdio.h>
struct BankAccount {
    char user[50];
    int accountNumber;
    float balance;
};
int main() {
    struct BankAccount account = {"John Doe", 12345, 1500.00};
    printf("Enter account number to check balance: ");
    int inputAccountNumber;
    scanf("%d", &inputAccountNumber);
    if (inputAccountNumber == account.accountNumber) {
        printf("Account user: %s\n", account.user);
        printf("Account Number: %d\n", account.accountNumber);
        printf("Current Balance: %.2f\n", account.balance);
    } else {
        printf("Account not found!\n");
    }
    return 0;
}
