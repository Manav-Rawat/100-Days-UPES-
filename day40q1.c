//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for (int k = 0; k < rows + cols - 1; k++) {
        int i = (k < cols) ? 0 : k - cols + 1;
        int j = (k < cols) ? k : cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");

    return 0;
}
