/*Write a program to display area of a circle using user defined function. Make
user defined function in following ways:
3. With arguments but no return value.*/    
#include <stdio.h>
#define PI 3.14

void areaofcircle(float radius);

int main(){
    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    areaofcircle(r);
    
}
void areaofcircle(float r){
    float area = PI *r *r;
    printf("Area of circle is : %f",area);
    
}