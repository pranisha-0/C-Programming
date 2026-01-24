#include <stdio.h>

int main() {
    int row = 6;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i - 1; j++) {
            printf(" ");
        }
        int value = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    
    return 0;
}