/*Write a program to display area of a circle using user defined function. Make
user defined function in following ways:
4. With arguments and a return*/
#include <stdio.h>
#define PI 3.14
float areaofcircle(float r);

int main(){
    float r , area;
    printf("Enter the radius of circle is: ");
    scanf("%f",&r);
    area = areaofcircle(r);
    printf("the area of circle is: %f",area);
    return 0;
}

float areaofcircle(float r){
    return PI*r*r;
}
