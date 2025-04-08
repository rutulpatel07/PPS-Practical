/* Write a separate program using each of following to find maximum of two
numbers scanned from keyboard (consider the case where both can be equal):
(a) else if statement
(b) switch ()
(c) Conditional operator */

//using else if statement
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two Numbers : ");
    scanf("%d %d",&a , &b);

    //a)
    if(a>b){
        printf("Maximum Number is: %d",a);
    }else if(b>a){
        printf("Maximum Number is : %d",b);
    }else{
        printf("Both Numbers are same");
    }

    return 0;
}
