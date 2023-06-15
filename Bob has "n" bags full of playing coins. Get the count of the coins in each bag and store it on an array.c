#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of bags: ");
    scanf("%d", &n);

    int coins[n];
    int totalCoins = 0;

    printf("Enter the count of coins in each bag:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
        totalCoins += coins[i];
    }

    printf("\n");
    printf("Count of coins in each bag:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", coins[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\n");
    printf("Total coins: %d\n", totalCoins);

    return 0;
}
