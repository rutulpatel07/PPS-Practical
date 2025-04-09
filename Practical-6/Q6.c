// Write a program to find multiplication of 2-D matrix (3x3).
#include<stdio.h>
int main(){
    int a[3][3] , b[3][3] , mult[3][3] , i , j , k; 
    
    printf("Enter First 3x3 matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second 3x3 matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mult[i][j]=0;
            for(k=0;k<3;k++){
                mult[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of the matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
}