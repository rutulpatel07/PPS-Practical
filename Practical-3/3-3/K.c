#include <stdio.h>
void main()
{
    int i = -4, j, num = 10;
    j = i % -3;
    j = (j ? 0 : num * num);
    printf("j=%d", j);
}