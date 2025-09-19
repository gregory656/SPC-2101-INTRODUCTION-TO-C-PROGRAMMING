//Name:GREGORY STEPHEN OTIENO
//RegNo:PA106/G/28772/25
//This programm asks the user to enter the values radius and height
//Then calculates the area and volume




#include <stdio.h>
#define PI 3.14159   // define value of pi

int main() {
    float radius, height;
    float volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;  // πr²h
    surfaceArea = 2 * PI * radius * (radius + height);  // 2πr(h + r)

    // Display results
    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}