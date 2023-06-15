#include <stdio.h>

void checkNumber(int n) {
    if (n % 2 != 0) {
        printf("Weird\n");
    } else {
        if (n >= 2 && n <= 5) {
            printf("Not Weird\n");
        } else if (n >= 6 && n <= 20) {
            printf("Weird\n");
        } else {
            printf("Not Weird\n");
        }
    }
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    checkNumber(n);

    return 0;
}
