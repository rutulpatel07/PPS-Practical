// Write a program to store a character string in block of memory space created by malloc and then modify the same to store a large string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size;
    
    // Initial size for the string
    size = 20;
    
    // Allocate memory using malloc
    str = (char *)malloc(size * sizeof(char));
    
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Store a string in the allocated memory
    strcpy(str, "Hello, World!");
    
    printf("Initial string: %s\n", str);
    printf("Initial allocated size: %d bytes\n", size);
    
    // Resize the memory to store a larger string
    size = 50;  // Larger size
    str = (char *)realloc(str, size * sizeof(char));
    
    if (str == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    // Store a larger string in the reallocated memory
    strcpy(str, "This is a much larger string that wouldn't fit in the original allocation.");
    
    printf("Modified string: %s\n", str);
    printf("New allocated size: %d bytes\n", size);
    
    // Free the allocated memory
    free(str);
    
    return 0;
}


/*Warning :- Please verify once I am not fully understand this this is Ai generated so*/