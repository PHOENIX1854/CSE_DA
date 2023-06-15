#include <stdio.h>

void matrixMultiplication(int matrix1[][3], int matrix2[][3], int result[][3]) {
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    int i, j;

    printf("Enter the elements of Matrix 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of Matrix 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    matrixMultiplication(matrix1, matrix2, result);

    printf("Resultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
