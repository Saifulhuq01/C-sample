#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) { // Input validation
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) { // Fixed loop condition
        if (scanf("%d", &arr[i]) != 1) { // Input validation
            printf("Invalid input! Exiting...\n");
            free(arr);
            return 1;
        }
    }

    printf("The entered elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Freeing allocated memory
    return 0;
}
