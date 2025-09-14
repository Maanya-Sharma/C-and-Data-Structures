#include <stdio.h>

#define SIZE 3

void inputMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];

    printf("Enter matrix A:\n");
    inputMatrix(A);
    printf("Enter matrix B:\n");
    inputMatrix(B);

    addMatrices(A, B, result);

    printf("\nMatrix A:\n");
    displayMatrix(A);
    printf("\nMatrix B:\n");
    displayMatrix(B);
    printf("\nResult (A+B):\n");
    displayMatrix(result);

    return 0;
}
