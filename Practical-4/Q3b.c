/* Write a separate program using each of following to find maximum of two
numbers scanned from keyboard (consider the case where both can be equal):
(a) else if statement
(b) switch ()
(c) Conditional operator */

//using switch case
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two Numbers : ");
    scanf("%d %d",&a , &b);

    //b)
    switch(a>b){
        case 1:
            printf("Maximum Number is: %d",a);
            break;
        case 0:
            switch(b>a){
                case 1:
                    printf("Maximum Number is : %d",b);
                    break;
                default:
                    printf("Both Numbers are same");
            }
            break;
    }

    return 0;
}