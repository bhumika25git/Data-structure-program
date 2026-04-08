#include <stdio.h>

#define MAX 100

// Function to create sparse matrix representation
void createSparseMatrix(int matrix[][MAX], int rows, int cols) {
    int sparse[MAX][3];  // triplet form: row, col, value
    int k = 0;

    // Traverse the original matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // Print sparse matrix
    printf("\nSparse Matrix Representation (row col value):\n");
    for (int i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }
}

int main() {
    int rows, cols;
    int matrix[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    createSparseMatrix(matrix, rows, cols);

    return 0;
}
