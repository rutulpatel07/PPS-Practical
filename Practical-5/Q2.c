/*Write a c program to check whether a given number is a perfect number or not.
(Hint: Perfect number is a positive number which sum of all positive divisors
excluding that number is equal to that number. For example, 6 is perfect
number since divisor of 6 are 1, 2 and 3. Sum of its divisor is 1 +
2+ 3 = 6) */

#include<stdio.h>
int main(){
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum == n){
        printf("%d is a perfect number.\n", n);
    }else{
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}