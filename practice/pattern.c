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
    return 0;
}




///
// #include <stdio.h>
// int main() {
//     int i, j, k, star=1, rows;
//     rows =5;
//   for(int a=0; a<2; a++) {
//       for(i=0; i<rows; i++) {
//         for(j=0; j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//   }
// }

// #include <stdio.h>
// int main() {
//     int i, j, k, one, rows;
//     rows=9;
//     one =1;
//     for(i=0; i<rows; i++) {
//         for(j=0; j<i; j++) {
//             printf("%d ", one);
//         }
//         printf("\n");
//     }
// }
///



/* 5
  5 5
 5 5 5 
 */
// #include <stdio.h>

// int main() {
//     int i, j, space;

//     for (i = 0; i < 4; i++) {
//         for (space = 1; space <= 4 - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             printf("5 ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
