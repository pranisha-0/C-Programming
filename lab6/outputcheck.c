#include <stdio.h>
int main() {
    int a=5, *b, **c;
    b=&a;
    c=&b;
    printf("%p %p %p ", &a, b, c);
    printf("%p", *c);
    printf(" %d %d %d ", a, *b, **c);
    return 0;
}