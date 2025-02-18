#include <stdio.h>
void main()
{
    int a = -21, b = 3;
    int i = 5;
    b = -b;
    printf("%d", a / b + 10);
    a = (i++ + ++i, i++);
    printf("%d", a);
}