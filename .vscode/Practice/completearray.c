#include <stdio.h>
#include <stdlib.h>

// Function to create an array
int* createArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return arr;
}

// Function to traverse and display the array
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a given position
int* insertElement(int* arr, int* size, int data, int pos) {
    if (pos < 0 || pos > *size) {
        printf("Position out of bounds\n");
        return arr;
    }

    arr = (int*)realloc(arr, (*size + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = data;
    (*size)++;
    return arr;
}

// Function to delete an element at a given position
int* deleteElement(int* arr, int* size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Position out of bounds\n");
        return arr;
    }

    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr = (int*)realloc(arr, (*size - 1) * sizeof(int));
    if (arr == NULL && *size > 1) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    (*size)--;
    return arr;
}

int main() {
    int size = 5;
    int* arr = createArray(size);

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    printf("Original Array: ");
    displayArray(arr, size);

    // Insert an element
    arr = insertElement(arr, &size, 10, 2);
    printf("After inserting 10 at position 2: ");
    displayArray(arr, size);

    // Delete an element
    arr = deleteElement(arr, &size, 3);
    printf("After deleting element at position 3: ");
    displayArray(arr, size);

    // Free the allocated memory
    free(arr);

    return 0;
}
