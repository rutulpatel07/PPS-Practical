/* Write a separate program using each of following to find maximum of two
numbers scanned from keyboard (consider the case where both can be equal):
(a) else if statement
(b) switch ()
(c) Conditional operator */

//using conditional operator
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two Numbers : ");
    scanf("%d %d",&a , &b);

    //c)
    (a>b)?printf("Maximum Number is: %d",a):(b>a)?printf("Maximum Number is : %d",b):printf("Both Numbers are same");
    return 0;
}