#include <stdio.h>
int main() {
    int rev=0, r, n, m;
    m=n;
    printf("Enter a number: ");
    scanf("%d", &n);
    r = n%10;
    rev = rev * 10 +r;
    n = n/10;
    r = n%10;
    rev  = rev * 10 +r;
    n = n/10;
    r = n%10;
    rev = rev * 10 +r;
    n = n/10;
    printf("The reverse of the number %d is %d. \n", m, rev);
}