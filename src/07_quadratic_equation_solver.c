#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Enter coefficients a b c (separated by spaces): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        fprintf(stderr, "Invalid input. Please enter three numeric coefficients.\n");
        return 1;
    }

    if (a == 0.0) {
        if (b == 0.0) {
            printf("Not an equation (a and b are zero).\n");
            return 0;
        }
        /* Linear equation bx + c = 0 */
        double x = -c / b;
        printf("Linear equation. Root: %.6g\n", x);
        return 0;
    }

    double disc = b*b - 4*a*c;

    if (disc > 0.0) {
        double sqrt_d = sqrt(disc);
        double r1 = (-b + sqrt_d) / (2*a);
        double r2 = (-b - sqrt_d) / (2*a);
        printf("Two distinct real roots:\n");
        printf("x1 = %.6g\n", r1);
        printf("x2 = %.6g\n", r2);
    } else if (fabs(disc) < 1e-12) {
        double r = -b / (2*a);
        printf("One real repeated root:\n");
        printf("x = %.6g\n", r);
    } else {
        /* Complex conjugate roots */
        double real = -b / (2*a);
        double imag = sqrt(-disc) / (2*a);
        printf("Two complex roots:\n");
        printf("x1 = %.6g + %.6gi\n", real, imag);
        printf("x2 = %.6g - %.6gi\n", real, imag);
    }

    return 0;
}
