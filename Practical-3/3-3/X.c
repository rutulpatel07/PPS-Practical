#include <stdio.h>
void main()
{
    int a = b = c = d = 30;
    printf("%d %d %d %d", a, b, c, d);
    /* ERROR: This code contains a compilation error
     * Variables b, c, and d are being used without declaration
     *
     * The intended logic:
     * - Initialize 4 variables (a, b, c, d) all with value 30
     * - Print all four values
     *
     * The assignment uses right-to-left association:
     * 1. d is assigned 30
     * 2. c is assigned the value of d (30)
     * 3. b is assigned the value of c (30)
     * 4. a is assigned the value of b (30)
     *
     * However, without proper declaration, this code won't compile
     */
    // ERROR: b, c, d used without declaration

    // Attempt to print all four values
    printf("%d %d %d %d", a, b, c, d);
}
