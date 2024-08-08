#include <stdio.h>

#define SIZE 3 // Change this to match your matrix size

// Function to calculate the sum of the principal diagonal
int sumOfPrincipalDiagonal(int mat[][SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int squareMatrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int diagonalSum = sumOfPrincipalDiagonal(squareMatrix);

    printf("Sum of the principal diagonal: %d\n", diagonalSum);

    return 0;
}
