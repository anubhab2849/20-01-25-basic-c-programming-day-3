#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Floor: %.0f, Ceiling: %.0f\n", floor(num), ceil(num));
    return 0;
}

