#include <stdio.h>
void main()
{
    float a, b;
    int i, j;
    a = (i = sizeof(i), j = sizeof(b), i + j);
    printf("%f", a);
}