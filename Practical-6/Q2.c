/*Write a program to calculate
1. Sum of all the elements located on odd indexes and
2. Multiplication of all elements on even indexes.*/

#include<stdio.h>
int main(){
    int arr[10];
    int sum = 0;
    int product = 1;

    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        if(i%2 == 0){
            product *= arr[i];
        }else{
            sum += arr[i];
        }
    }
    printf("Sum of all the elements located on odd indexes: %d\n", sum);
    printf("Multiplication of all elements on even indexes: %d\n", product);
    return 0;
}   