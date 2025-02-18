#include <stdio.h>
void main()
{
    int x = 3, z;
    z = x++ + ++x;
    printf("x=%d z=%d", x, z);
}