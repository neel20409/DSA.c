#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to multiply a matrix by a scalar
void multiplyMatrixByScalar(int mat[][COLS], int scalar) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            mat[i][j] *= scalar;
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int myMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int scalar;

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    multiplyMatrixByScalar(myMatrix, scalar);

    printf("Matrix multiplied by scalar %d:\n", scalar);
    displayMatrix(myMatrix);

    return 0;
}
