#include <stdio.h>

int main() {
    double length, width, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Print the results
    printf("Area of the rectangle: %.2lf\n", area);
    printf("Perimeter of the rectangle: %.2lf\n", perimeter);

    return 0; 
}

