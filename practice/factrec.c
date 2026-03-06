#include <stdio.h>
int sum();
int main() {
    int a, b, res;
    printf("Enter two numbers:: ");
    scanf("%d %d", &a, &b);
    sum();
}
int sum() {
    int res, a, b;
    res = a+b;
    // printf("The sum is: %d. \n", res);
    return res;
}