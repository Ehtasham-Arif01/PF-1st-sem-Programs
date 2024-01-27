#include <stdio.h>

void printBoundaryElements(int arr[][100], int rows, int cols) {
    int boundarySum = 0;

    // Print the matrix with boundary elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", arr[i][j]);
                boundarySum += arr[i][j];
            } else {
                printf("  "); // Two spaces for non-boundary elements
            }
        }
        printf("\n");
    }

    printf("\nSum of boundary elements: %d\n", boundarySum);
}

int main() {
    int rows, cols;

    // Input dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input 2D array elements
    int array_2d[100][100];
    printf("Enter the elements of the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array_2d[i][j]);
        }
    }

    // Call the function to print the matrix with boundary elements and their sum
    printf("\nMatrix with Boundary Elements:\n");
    printBoundaryElements(array_2d, rows, cols);

    return 0;
}

