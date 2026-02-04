#include <stdio.h>
int main() {
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr) / sizeof(arr[0]);

for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            int b = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = b;
        }
    }
}
printf("Sorted array in ascending order: \n");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

    return 0;
}