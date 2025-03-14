#include <stdio.h>

// Simple enum for colors with typedef in one line
typedef enum {RED, GREEN, BLUE} Color;

// Typedef for a simple structure
typedef struct {
    int x, y;
} Point;

int main() {
    // Using the enum typedef
    Color myColor = BLUE;
    printf("Color value: %d\n", myColor);
    
    // Using the structure typedef
    Point p = {10, 20};
    printf("Point coordinates: (%d, %d)\n", p.x, p.y);
    
    return 0;
}