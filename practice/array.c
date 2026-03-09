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

//sorting(descending)
#include <stdio.h>
int main() {
    int arr[5] = {5, 3, 9, 21, 6}, i;
    printf("Unsorted: ");
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf(" \nsorted: ");
    for(i=0; i<5; i++) {
        for(int j=i+1; j<5; j++) {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0; i>5; i++) {
          printf("%d ", arr[i]);
    }
    return 0;
}