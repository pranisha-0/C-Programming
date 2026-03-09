//roots of quadratic equations
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c,d, r1, r2;
    printf("Enter coeffs of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d= b*b-4*a*c;
    if(d==0) {
        r1 = -b/(2*a);
        printf("Roots are equal: %.3f. \n", r1);
    } 
    else if(d>0) {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct: %.3f and %.3f. \n", r1, r2);
    }
    else{
        r1 = -b/(2*a);
        r2 = sqrt(-d)/(2*a);
        printf("Roots are imaginary: %.3f+%.3fi and %.3f-%.3i. \n");
    }
}