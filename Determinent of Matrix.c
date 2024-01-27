#include <stdio.h>

int determinant(int matrix[3][3], int size);

int main() {
    int matrix[3][3];
    int size;

    // Input for the matrix size
    printf("Enter the size of the square matrix (2 or 3): ");
    scanf("%d", &size);

    // Input for the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            scanf("%d", &matrix[i][j]);

    // Check if the size is valid
    if (size < 2 || size > 3) {
        printf("Error: Only 2x2 and 3x3 matrices are supported.\n");
        return 1;
    }

    // Calculate and display the determinant
    int det = determinant(matrix, size);
    printf("Determinant of the matrix is: %d\n", det);

    return 0;
}

// Function to find the determinant of a 2x2 or 3x3 matrix
int determinant(int matrix[3][3], int size) {
    if (size == 2)
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    else if (size == 3)
        return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
               matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
               matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    else
        return 0; // Unsupported size
}

