#include <stdio.h>
int main(void)
{
    int x = 1; /* Initialize x to 1 */
    int y = 3;
    if (y > 0)
    {
        int x = 2; /* Initialize x to 2 */
        printf("second x = %4d\n", x);
    }
    printf("first x = %4d\n", x);
    return (0);
}