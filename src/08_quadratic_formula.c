*// Quadratic equation solver in C

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double inside, x1, x2;
    
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    
    inside = b*b - 4*a*c;
    
    if (inside < 0) {
        printf("No real solutions\n");
    } else {
        x1 = (-b + sqrt(inside)) / (2*a);
        x2 = (-b - sqrt(inside)) / (2*a);
        printf("Solutions: %f and %f\n", x1, x2);
    }
    
    return 0;
}