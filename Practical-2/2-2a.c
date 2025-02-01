#include <stdio.h>
int main(){
    int a, b, c;
    a = 5, b = 10;
    c = a;
    a = b;
    b = c;

    printf("a = %d, b = %d\n",a,b);

    return 0;
}