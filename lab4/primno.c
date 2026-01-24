#include <stdio.h>

int main() {
    int m, n, count = 0;
    
    printf("Enter the starting number (m): ");
    scanf("%d", &m);
    printf("Enter the ending number (n): ");
    scanf("%d", &n);
    
    // Validation: Check if m > n
    if (m > n) {
        int t=m;
        m=n;
        n=t;
        
    }
    
    printf("\nPrime numbers between %d and %d:\n", m, n);
    
    for (int num = m; num <= n; num++) {
        if (num < 2) continue;
        
        int isPrime = 1;
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", num);
            count++;
        }
    }
    
    printf("\n\nTotal count of prime numbers: %d\n", count);
    
    return 0;
}