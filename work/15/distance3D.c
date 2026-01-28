#include <stdio.h>
#include <math.h>

// Define a structure for a point in 3D space
struct Point3D {
    double x; // x-coordinate
    double y; // y-coordinate
    double z; // z-coordinate
};

// Function to calculate the distance from the origin to a 3D point
double distance3D(struct Point3D point) {
    return sqrt(point.x * point.x + point.y * point.y + point.z * point.z);
}

int main(void) {
    struct Point3D point; // Declare a variable for a 3D point

    // Input the coordinates of the point
    printf("Input x: ");
    scanf("%lf", &point.x);
    printf("Input y: ");
    scanf("%lf", &point.y);
    printf("Input z: ");
    scanf("%lf", &point.z);

    // Calculate and display the distance from the origin
    printf("Distance from the origin is: %.1f\n", distance3D(point));

    return 0;
}