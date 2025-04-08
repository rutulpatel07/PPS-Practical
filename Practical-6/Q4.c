// Write a program to sort integer 1-D array (arranging elements in ascending order)
#include <stdio.h>
int main(){
    int arr[10];
    int temp;
    for (int i = 0; i < 10; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}