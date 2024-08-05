#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to calculate the sum of matrix elements
int sumOfMatrix(int mat[][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int main() {
    int myMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int totalSum = sumOfMatrix(myMatrix);

    printf("Sum of all elements in the matrix: %d\n", totalSum);

    return 0;
}
