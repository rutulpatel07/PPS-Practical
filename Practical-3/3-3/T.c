#include <stdio.h>
void main()
{
    int x, y, z;
    x = y = z = 1;
    z = ++x && ++y && ++z;
    printf("x=%d y=%d z=%d", x, y, z);
}