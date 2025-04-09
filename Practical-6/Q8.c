// Write a program to scan and print a 3-dimensional int array.

#include <stdio.h>

int main() {
    int arr[3][2][2];  // 3D array with dimensions [2][2][2]
    int i, j, k;

    // Input elements of the 3D array
    printf("Enter 12 elements for a 3D array of size [3][2][2]:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Output the 3D array
    printf("\nThe 3D array elements are:\n");
    for (i = 0; i < 3; i++) {
        printf("Layer %d:\n", i);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
