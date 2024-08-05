#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to search for an element in the matrix
int searchElement(int mat[][COLS], int target) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (mat[i][j] == target) {
                return 1; // Element found
            }
        }
    }
    return 0; // Element not found
}

int main() {
    int myMatrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int targetValue;

    printf("Enter the value to search for: ");
    scanf("%d", &targetValue);

    if (searchElement(myMatrix, targetValue)) {
        printf("Element %d found in the matrix.\n", targetValue);
    } else {
        printf("Element %d not found in the matrix.\n", targetValue);
    }

    return 0;
}
