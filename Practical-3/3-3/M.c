#include <stdio.h>
void main()
{
    int x = 3, z;
    z = x++ + 10;
    printf("x=%d z=%d", x, z);
}