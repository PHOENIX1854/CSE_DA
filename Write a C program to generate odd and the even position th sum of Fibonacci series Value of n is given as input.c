#include <stdio.h>

void generateFibonacci(int n) {
    int fib[n];

    // First two numbers of the series
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci series
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Calculate sums of odd and even positions
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += fib[i];
        } else {
            oddSum += fib[i];
        }
    }

    // Display the Fibonacci series
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\n");
    printf("Sum of odd positions: %d\n", oddSum);
    printf("Sum of even positions: %d\n", evenSum);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
