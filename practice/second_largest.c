#include <stdio.h>

// Recursive function to find the largest number in an array
int findLargest(int arr[], int size) {
    if (size == 1)
        return arr[0];

    int max = findLargest(arr, size - 1);
    if (arr[size - 1] > max)
        return arr[size - 1];
    else
        return max;
}

// Recursive function to find the second largest number
// It finds the largest, then finds the largest among remaining elements
int findSecondLargest(int arr[], int size, int largest) {
    // Base case: if only one element, return it (as candidate)
    if (size == 1) {
        if (arr[0] != largest)
            return arr[0];
        else
            return -999999; // skip the largest
    }

    int secondMax = findSecondLargest(arr, size - 1, largest);

    // Compare current element with the result so far
    if (arr[size - 1] != largest && arr[size - 1] > secondMax)
        return arr[size - 1];
    else
        return secondMax;
}

int main() {
    int arr[100];
    int n = 0, num;

    // Open and read numbers from random_integers.txt
    FILE *fp = fopen("../exam.c/random_integers.txt", "r");
    if (fp == NULL) {
        printf("Could not open random_integers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        arr[n] = num;
        n++;
    }
    fclose(fp);

    printf("Numbers read from file: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Find largest using recursion
    int largest = findLargest(arr, n);

    // Find second largest using recursion
    int second = findSecondLargest(arr, n, largest);

    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second);

    // Write largest and second largest to second_largest.txt
    FILE *out = fopen("second_largest.txt", "w");
    if (out == NULL) {
        printf("Could not open second_largest.txt for writing\n");
        return 1;
    }

    fprintf(out, "Largest: %d\n", largest);
    fprintf(out, "Second Largest: %d\n", second);
    fclose(out);

    printf("Results written to second_largest.txt\n");

    return 0;
}
