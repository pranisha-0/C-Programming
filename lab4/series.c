#include <stdio.h>

int main() {
    double x, sum = 0, term = 1;
    int i = 0, sign = 1;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    do {
        sum += sign * term;
        i++;
        term = term * x / i;
        sign = -sign;
    } while (term > 0.0001);
    
    printf("\nSum of the series = %.6f\n", sum);
    printf("Number of terms calculated: %d\n", i);
    
    return 0;
}