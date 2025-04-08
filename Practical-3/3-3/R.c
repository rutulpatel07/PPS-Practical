#include<stdio.h>
void main()
{
    int a=-21,b=3;    // Initialize a to -21 and b to 3
    int i=5;          // Initialize i to 5
    
    b=-b;             // Negate b, so b becomes -3
    
    printf("%d ",a/b+10);  // Calculate a/b+10 = -21/(-3)+10 = 7+10 = 17
    
    // Complex expression with comma operator and increment operators:
    // 1. i++ + ++i: i is 5, i++ uses 5 then increments to 6, 
    //    ++i increments to 7 then uses 7, so expression = 5+7=12, i becomes 7
    // 2. Comma operator discards left result and evaluates right expression (i++)
    // 3. i++ uses 7 then increments to 8, so a = 7
    a=(i++ + ++i, i++);
    
    printf("%d",a);   // Print the value of a, which is 7
}

// Output: 17 7