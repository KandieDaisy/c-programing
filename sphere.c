#include <stdio.h>
#include <math.h>
// Function prototype
float calculateVolume(float radius);
int main() {
    float radius;
    //  prompts user ot Input radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // the output after calculation of the volume 
    printf("Volume of the sphere is: %.2f\n", calculateVolume(radius));
    return 0;
}
float calculateVolume(float radius) {
    return (4.0 / 3.0) * 3.14159 * pow(radius, 3);
}