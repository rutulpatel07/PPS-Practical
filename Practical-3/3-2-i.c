// ✅ (i) Implicit Type Casting

#include <stdio.h>

int main() {
    int intNum = 10;
    float floatNum;

    // Implicit Type Casting: int to float
    floatNum = intNum; 
    
    printf("Integer value: %d\n", intNum);
    printf("After implicit casting to float: %.2f\n", floatNum);

    return 0;
}

