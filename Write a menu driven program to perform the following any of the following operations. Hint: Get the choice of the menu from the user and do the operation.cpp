#include <stdio.h>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int countOddDigits(int number) {
    int count = 0;
    while (number != 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int reverseNumber(int number) {
    int reverse = 0;
    while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return reverse;
}

void printWordEquivalent(int number) {
    char* words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Word Equivalent: ");
    if (number == 0) {
        printf("%s", words[0]);
    } else {
        while (number != 0) {
            int digit = number % 10;
            printf("%s ", words[digit]);
            number /= 10;
        }
    }
    printf("\n");
}

int main() {
    int number;
    int choice;

    while (1) {
        printf("\n");
        printf("Menu\n");
        printf("1. Number of digits in the given number\n");
        printf("2. Count of odd digits\n");
        printf("3. Sum of all digits\n");
        printf("4. Reverse of the digits\n");
        printf("5. Word equivalent of the number\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("Thank you!\n");
                return 0;

            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Number of digits: %d\n", countDigits(number));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Count of odd digits: %d\n", countOddDigits(number));
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Sum of all digits: %d\n", sumOfDigits(number));
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Reverse of the digits: %d\n", reverseNumber(number));
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &number);
                printWordEquivalent(number);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
