#include <stdio.h>
void main()
{
    int a = 25, b = 5, c, d, e, f, g;
    c = a + b;
    d = a < b;
    e = a % b;
    f = a && b;
    g = a << 2;
    printf("a = % d\n b = % d \n c = % d \n d = % d \n e = % d \n f = % d \n g = % d",a, b, c, d, e, f, g);
}