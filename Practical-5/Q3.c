//Write a program in C to check whether a number is a palindrome or not.

#include<stdio.h>
int main(){
    int n;
    int temp;
    int rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n){
        printf("%d is a palindrome number.\n", n);
    }else{
        printf("%d is not a palindrome number.\n", n);
    }

    return 0;
}