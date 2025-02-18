#include <stdio.h>
void main()
{
    float a = 1.5;
    int b = 3;
    a = b / 2 + b * 8 / b - b + a / 3;
    printf("%f", a);
}