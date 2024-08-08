#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// Function to display the elements of the 2D array
void display2DArray(int arr[][MAX_COLS],int ROWS,int COLS) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX_ROWS][MAX_COLS];int ROWS;int COLS;

    printf("Enter no. of rows in 2D array: ");
    scanf("%d",&ROWS);
    
    printf("Enter no. of colums in 2D array: ");
    scanf("%d",&COLS);


for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            // printf("Enter %d %d element : ",i,j);
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }
        

    printf("Elements of the 2D array:\n");
    display2DArray(arr,ROWS,COLS);

    return 0;
}
