#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void removeDuplicates(int arr[], int size) {
    int removedElements[size];
    int removedCount = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                removedElements[removedCount++] = arr[j];
                break;
            }
        }
        if (isDuplicate == 0) {
            arr[i - removedCount] = arr[i];
        }
    }

    printf("Removed elements: ");
    for (int i = 0; i < removedCount; i++) {
        printf("%d\n", removedElements[i]);
    }
    printf("\n");

    printf("Revised Array: ");
    for (int i = 0; i < size - removedCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    displayArray(arr, size);

    printf("\n");

    removeDuplicates(arr, size);

    return 0;
}
