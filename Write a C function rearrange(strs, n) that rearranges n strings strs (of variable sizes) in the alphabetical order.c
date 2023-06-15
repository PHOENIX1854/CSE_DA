#include <stdio.h>
#include <string.h>

void swapStrings(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void rearrange(char* strs[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(strs[i], strs[j]) > 0) {
                swapStrings(&strs[i], &strs[j]);
            }
        }
    }
}

int main() {
    char* strs[] = {"Uma", "Rani", "Soma", "Kannan"};
    int n = sizeof(strs) / sizeof(strs[0]);
    int i;

    printf("Before rearranging:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    rearrange(strs, n);

    printf("After rearranging:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}
