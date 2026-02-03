
#include <stdio.h>

int main() {
    int rows = 6;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            int val = 1;
            for (int k = 0; k < j; k++) {
                val = val * (i - k) / (k + 1);
            }
            printf("%d ", val);
        }
        printf("\n");
    }
    
    return 0;
}