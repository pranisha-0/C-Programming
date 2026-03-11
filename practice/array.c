// #include <stdio.h>
// int main() {
//     int mark[100], n;
//     printf("Enter no. of students: ");
//     scanf("%d", &n);
//     for(int i=0; i<n; i++) {
//         printf("enter marks: ");
//         scanf("%d", &mark[i]);
//     }
//     printf("\n THE MARKS: \n");
//     for(int j=0; j<n; j++) {
//         printf(" %d\t", mark[j]);
//     }
// }

//sorting
// #include <stdio.h>
// int main() {
//     int arr[5] = {5, 3, 9, 21, 6}, i;
//     printf("Unsorted: ");
//     for(i=0; i<5; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf(" \nsorted: ");
//     for(i=0; i<5; i++) {
//         for(int j=i+1; j<5; j++) { 
//             if(arr[i]>arr[j]) {   //descending garda if(arr[i]<arr[j]).
//                 int temp = arr[i];  //ascending ko hoo yo code.
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(i=0; i<5; i++) {
//           printf("%d ", arr[i]);
//     }
//     return 0;
// }

//array with function
// #include <stdio.h>
// void show(int [], int);
// int main() {
//     int a[100], n, i;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     printf("reading the array: ");
//     for(i=0; i<n; i++) {
//         scanf("%d", &a[i]);
//     }
//     show(a, n);
// }
// void show(int a[], int n) {
//     int j;
//     for (j=0; j<n; j++) {
//         printf("%d ", a[j]);
//     }
// }

//2D array reading and matrix printing
// #include <stdio.h>
// int main() {
//     int a[10][10], row, col;
//         printf("row and column: ");
//         scanf("%d %d", &row, &col);
//         printf("enter elements \n");
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//             printf("enter elem of %d row, %d col: ", i+1, j+1);
//             scanf("%d", &a[i][j]);
//             }
//         }
//         printf("printing elements \n");
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//             printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
// }

//matrix add
// #include <stdio.h>
// int main() {
//     int a[10][10],b[10][10], c[10][10], row, col;
//         printf("row and column: ");
//         scanf("%d %d", &row, &col);
//         printf("enter elements of a: \n");
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//             scanf("%d", &a[i][j]);
//             }
//         }
//         printf("enter elements of b: \n");
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//             scanf("%d", &b[i][j]);
//             }
//         }
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//            c[i][j] = a[i][j] + b[i][j];
//             }
//         }
//         printf("sum of matrix is: \n");
//         for(int i=0; i<row; i++) {
//             for(int j=0; j<col; j++) {
//             printf("  %d ", c[i][j]);
//             }
//             printf("\n");
//         }
//     }

//matrix multiply
// #include <stdio.h>
// int main() {
//     int a[10][10], b[10][10], c[10][10], rowA, colA, rowB, colB;
//     int i, j, k, sum=0;
//     printf("Enter no of rows and cols for matA: ");
//     scanf("%d %d", &rowA, &colA);
//     printf("Enter no of rows and cols for matB: ");
//     scanf("%d %d", &rowB, &colB);
//     if(colA == rowB) {
//      printf("Reading MatA: \n");
//     for(i=0; i<rowA; i++) {
//         for(j=0; j<colA; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Reading MatB: \n");
//     for(i=0; i<rowB; i++) {
//         for(j=0; j<colB; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("MatA * MatB: \n");
//     for(i=0; i<rowA; i++) {
//         for(j=0; j<colB; j++) {
//             for(k=0; k<colA; k++) {
//                 sum = sum + a[i][k]*b[k][j];
//             }
//             c[i][j]=sum;
//             sum = 0;
//         }
//     }
//     for(i=0; i<rowA; i++) {
//         for(j=0; j<colB; j++) {
//             printf("  %d ", c[i][j]);
//         }
//         printf("\n");
//     }
//    }
//    else{
//     printf("The order is wrong.\n");
//    }
// }