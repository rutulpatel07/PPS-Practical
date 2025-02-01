#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("\t\ta+b = %d\n",a+b);
    printf("a-b = %d\ta%%b = %d\t\ta*b = %d\n",a-b,a%b,a*b);
    printf("\t\ta/b = %d",a/b);

    return 0;
}