#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int array[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    for (int i = 1; i < N; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("\n");
    printf("Elements of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    printf("\n");
    printf("The largest number: %d\n", largest);

    return 0;
}
