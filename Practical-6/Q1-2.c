/*Write a program to display Sum and average of any 10- n o . using 1-D
Array.
2. Using float array*/
#include<stdio.h>
int main(){
    float arr[10];
    float sum = 0;
    float avg = 0;

    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum/10.0;
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);

}