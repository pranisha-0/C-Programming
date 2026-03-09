#include <stdio.h>
int main() {
    int n1, n2, hcf, lcm;
    printf("Enter numbers: ");
    scanf("%d %d", &n1, &n2);
    int a = n1, b = n2;
    while(n2!=0) {
        int t = n2;
        n2 = n1%n2;
        n1 = t;
    }
    hcf = n1;
    lcm = (a * b)/hcf;
    printf("THe hcf and lcm are %d and %d resp. \n", hcf, lcm);
}