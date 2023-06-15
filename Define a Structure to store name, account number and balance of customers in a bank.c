#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100

// Structure to store customer details
typedef struct {
    char name[50];
    int accountNumber;
    float balance;
} Customer;

// Function to print names of customers with balance less than Rs. 2000
void printCustomersWithLowBalance(Customer customers[], int numCustomers) {
    printf("Customers with balance less than Rs. 2000:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 2000) {
            printf("%s\n", customers[i].name);
        }
    }
}

// Function to add interest of 5% to balances greater than Rs. 10000
void addInterestToCustomers(Customer customers[], int numCustomers) {
    printf("Customers who got interest added:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 10000) {
            customers[i].balance += customers[i].balance * 0.05;  // Adding 5% interest
            printf("Name: %s, Account Number: %d, New Balance: Rs. %.2f\n",
                   customers[i].name, customers[i].accountNumber, customers[i].balance);
        }
    }
}

int main() {
    int numCustomers;

    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    // Create an array of Customer structures
    Customer customers[MAX_CUSTOMERS];

    // Get customer details from the user
    for (int i = 0; i < numCustomers; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Balance: Rs. ");
        scanf("%f", &customers[i].balance);
    }

    printCustomersWithLowBalance(customers, numCustomers);
    addInterestToCustomers(customers, numCustomers);

    return 0;
}
