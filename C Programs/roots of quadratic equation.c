#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (a == 0) {
        printf("Not a quadratic equation (a should not be zero).\n");
    } else if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
