#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {
        
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
