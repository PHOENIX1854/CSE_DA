#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store customer details
struct Customer {
    char name[100];
    int accountNumber;
    float balance;
};

// Function to print names of customers with balance less than Rs.2000
void printCustomersWithLowBalance(struct Customer customers[], int numCustomers) {
    int i;

    printf("Customers with balance less than Rs.2000:\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 2000) {
            printf("%s\n", customers[i].name);
        }
    }
}

// Function to add 5% interest to the balance of customers with more than Rs.10000
void addInterest(struct Customer customers[], int numCustomers) {
    int i;

    printf("Customers who received interest:\n");
    for (i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 10000) {
            float interest = customers[i].balance * 0.05;
            customers[i].balance += interest;
            printf("Name: %s\n", customers[i].name);
            printf("Account Number: %d\n", customers[i].accountNumber);
            printf("New Balance: Rs.%.2f\n\n", customers[i].balance);
        }
    }
}

int main() {
    int numCustomers;

    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    // Allocate memory for the customers dynamically
    struct Customer* customers = (struct Customer*)malloc(numCustomers * sizeof(struct Customer));

    int i;
    for (i = 0; i < numCustomers; i++) {
        printf("\nCustomer %d\n", i+1);
        printf("Enter name: ");
        scanf("%s", customers[i].name);
        printf("Enter account number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Enter balance: ");
        scanf("%f", &customers[i].balance);
    }

    printCustomersWithLowBalance(customers, numCustomers);
    addInterest(customers, numCustomers);

    // Free the dynamically allocated memory
    free(customers);

    return 0;
}
