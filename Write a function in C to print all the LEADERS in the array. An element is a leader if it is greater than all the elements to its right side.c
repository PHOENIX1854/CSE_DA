#include <stdio.h>

void printLeaders(int arr[], int size) {
    int maxFromRight = arr[size - 1];
  
    // The rightmost element is always a leader
    printf("Leaders: %d ", maxFromRight);
    
    // Traverse the array from right to left
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            // Current element is greater than the maximum element on its right
            printf("%d ", arr[i]);
            maxFromRight = arr[i];
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printLeaders(arr, size);

    return 0;
}
