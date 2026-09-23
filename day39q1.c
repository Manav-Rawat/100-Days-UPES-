//Check if the elements on the diagonal of a matrix are distinct

#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols;
    int are_distinct = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix must be square to check the main diagonal.\n");
        return 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                are_distinct = 0;
                break;
            }
        }
        if (!are_distinct) {
            break;
        }
    }

    if (are_distinct) {
        printf("All elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are not distinct.\n");
    }

    return 0;
}

