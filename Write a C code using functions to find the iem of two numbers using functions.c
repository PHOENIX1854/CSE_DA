#include <stdio.h>

int gcd(int num1, int num2) {
    // Calculate the GCD (Greatest Common Divisor) using Euclidean algorithm
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    return num1;
}

int lcm(int num1, int num2) {
    int gcdResult = gcd(num1, num2);
    int lcmResult = (num1 * num2) / gcdResult;
    return lcmResult;
}

int main() {
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    int lcmResult = lcm(number1, number2);

    printf("LCM of the two numbers is: %d\n", lcmResult);

    return 0;
}
