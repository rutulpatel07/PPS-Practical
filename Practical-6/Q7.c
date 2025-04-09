// Write a Program to Find largest odd number from given 1-D Array
#include<stdio.h>
int main(){
    int arr[10];
    int largestOdd = -1; // Initialize to -1 to indicate no odd number found

    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++){
        if(arr[i] % 2 != 0 && arr[i] > largestOdd){
            largestOdd = arr[i];
        }
    }

    if(largestOdd != -1){
        printf("Largest odd number: %d\n", largestOdd);
    } else {
        printf("No odd number found.\n");
    }

    return 0;
}