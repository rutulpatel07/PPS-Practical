//Write a function to find maximum number out of three numbers.
#include<stdio.h>
int max(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maximum number is: %d\n", max(a, b, c));
    return 0;
}

