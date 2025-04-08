// Write a program in C to display the n terms of odd natural number and their
// sum.

#include<stdio.h>
int main(){
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d odd natural numbers are: ", n);
    for(int i=1; i<=n; i++){
        printf("%d ", 2*i-1);
        sum += 2*i-1;
    }
    printf("\nSum of first %d odd natural numbers: %d\n", n, sum);
    
    return 0;
}