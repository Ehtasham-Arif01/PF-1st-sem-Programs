#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int first[MAX_SIZE][MAX_SIZE], int second[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowFirst, int colFirst, int rowSecond, int colSecond);

int main() {
    int first[MAX_SIZE][MAX_SIZE], second[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowFirst, colFirst, rowSecond, colSecond;

    // Input for the first matrix
    printf("Enter dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rowFirst, &colFirst);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < colFirst; ++j)
            scanf("%d", &first[i][j]);

    // Input for the second matrix
    printf("Enter dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rowSecond, &colSecond);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i)
        for (int j = 0; j < colSecond; ++j)
            scanf("%d", &second[i][j]);

    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Error: Matrix multiplication not possible.\n");
        return 1;
    }

    // Perform matrix multiplication
    multiplyMatrices(first, second, result, rowFirst, colFirst, rowSecond, colSecond);

    // Display the result
    printf("Product of matrices:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int first[MAX_SIZE][MAX_SIZE], int second[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; ++k)
                result[i][j] += first[i][k] * second[k][j];
        }
    }
}
