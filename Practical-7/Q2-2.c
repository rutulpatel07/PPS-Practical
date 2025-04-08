/*Write a program to display area of a circle using user defined function. Make
user defined function in following ways:
2. No arguments but a return value.*/   
#include <stdio.h>
#define PI 3.14

float areaofcircle();

int main(){
    float area;
    area = areaofcircle();
    printf("Area of circle is : %f", area);
    return 0;
}
float areaofcircle(){
    float r ;
    printf("enter value of radius");
    scanf("%f",&r);
    
    return PI * r *r ;
}