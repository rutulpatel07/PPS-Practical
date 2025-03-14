// 2.7 Calculate the volume of following shapes in a single program:
// (1) Volume of Cylinder
// (2) Volume of Sphere
// (3) Volume of Cuboid

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, length, width;
    float volumeCylinder, volumeSphere, volumeCuboid;

    // Input for Cylinder
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f %f", &radius, &height);
    volumeCylinder = PI * radius * radius * height;
    printf("Volume of Cylinder: %.2f\n", volumeCylinder);

    // Input for Sphere
    printf("\nEnter the radius of the sphere: ");
    scanf("%f", &radius);
    volumeSphere = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume of Sphere: %.2f\n", volumeSphere);

    // Input for Cuboid
    printf("\nEnter the length, width, and height of the cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    volumeCuboid = length * width * height;
    printf("Volume of Cuboid: %.2f\n", volumeCuboid);

    return 0;
}
