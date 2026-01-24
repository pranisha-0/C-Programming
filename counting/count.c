#include <stdio.h>
int main () {
    int n, count=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n > 0) {
        count++;
        n = n/10;
    }
    printf("This is a %d digit number. \n", count);
    return 0;

}