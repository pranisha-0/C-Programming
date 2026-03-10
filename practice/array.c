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
#include <stdio.h>
void show(int [], int);
int main() {
    int a[100], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("reading the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    show(a, n);
}
void show(int a[], int n) {
    int j;
    for (j=0; j<n; j++) {
        printf("%d ", a[j]);
    }
}