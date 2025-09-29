#include <stdio.h>

void deleteValue(int arr[], int *n, int value) {
    int i, j;

    for (i = 0; i < *n; i++) {
        if (arr[i] == value) {
            for (j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            return;
        }
    }
    printf("Value %d not found in the array.\n", value);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = 11;
    int value;

    printf("Original array: ");
    printArray(arr, n);

    printf("Enter value to delete: ");
    scanf("%d", &value);

    deleteValue(arr, &n, value);

    printf("Array after deletion: ");
    printArray(arr, n);

    return 0;
}
