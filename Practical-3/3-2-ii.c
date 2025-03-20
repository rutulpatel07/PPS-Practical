// ✅ (ii) Explicit Type Casting
#include <stdio.h>

int main() {
    float floatNum = 10.75;
    int intNum;

    // Explicit Type Casting: float to int
    intNum = (int) floatNum; 
    
    printf("Float value: %.2f\n", floatNum);
    printf("After explicit casting to int: %d\n", intNum);

    return 0;
}
