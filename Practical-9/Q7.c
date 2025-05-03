// Write a program using pointer to read in the array of integers and print its elements in reverse order

#include <stdio.h>

int main() {
    int n, i;
    
    // Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare an array of size n
    int arr[n];
    
    // Pointer to the array
    int *ptr = arr;
    
    // Read array elements using pointer
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // ptr + i points to the ith element
    }
    
    // Print array elements in reverse order using pointer
    printf("Elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));  // *(ptr + i) gives the value at the ith position
    }
    printf("\n");
    
    return 0;
}