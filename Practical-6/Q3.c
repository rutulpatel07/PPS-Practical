// Write a program which finds the maximum element from one dimensional int array.

#include<stdio.h>
int main(){
    int arr[10];
    int max = 0;

    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    return 0;
}   