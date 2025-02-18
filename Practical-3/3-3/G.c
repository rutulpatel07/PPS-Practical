#include <stdio.h>
void main()
{
    int x = 10, y = 5, p, q;
    p = x > 9;
    q = x > 3 && y != 3;
    printf("p=%d q=%d", p, q);
}