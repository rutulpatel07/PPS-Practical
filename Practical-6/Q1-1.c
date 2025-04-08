/*Write a program to display Sum and average of any 10- n o . using 1-D
Array.
1. Using int array*/
#include<stdio.h>
int main(){
    int arr[10];
    int sum = 0;
    float avg = 0;

    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum/10.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

}