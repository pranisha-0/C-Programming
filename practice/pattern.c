#include <stdio.h>
int main() {
    int i, j, k, space, star=1, rows;
    rows=5;
    space= rows-1;
    for(i=0; i<rows; i++) {
        for(k=0; k<space; k++) {
            printf("  ");
        }
        space--;
        for(j=0; j<star; j++) {
            printf("* ");
        }
        star+=2;
        printf("\n");
    }
    printf("       |  |    ");
    return 0;
}