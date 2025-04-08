/*Write a program to display area of a circle using user defined function. Make
user defined function in following ways:
1. No arguments and no return value.*/
#include <stdio.h>
#define PI 3.14

void areaofcircle();

int main(){
    areaofcircle();
    return 0;
}
void areaofcircle(){
    float r , area;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    
    area = PI * r *r ;
    printf("Area of the circle is : %f",area);
}




