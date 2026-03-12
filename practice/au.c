#include <stdio.h>

#define COLS 5
#define MAX_ROWS 100

int rowSum(int row[], int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++)
        sum += row[i];
    return sum;
}

int main() {
    int arr[MAX_ROWS][COLS];
    int rows = 0;

    // Read from random_integers.txt
    FILE *fp = fopen("random_integers.txt", "r");
    if (fp == NULL) {
        printf("Cannot open random_integers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &arr[rows][0]) != EOF) {
        for (int j = 1; j < COLS; j++)
            fscanf(fp, "%d", &arr[rows][j]);
        rows++;
    }
    fclose(fp);

    // Print array and calculate row sums
    printf("Data read (%d rows x %d cols):\n", rows, COLS);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++)
            printf("%4d", arr[i][j]);
        printf("  -> Row Sum = %d\n", rowSum(arr[i], COLS));
    }

    // Write row sums to row_sum.txt
    FILE *fw = fopen("row_sum.txt", "w");
    if (fw == NULL) {
        printf("Cannot open row_sum.txt\n");
        return 1;
    }

    for (int i = 0; i < rows; i++)
        fprintf(fw, "%d\n", rowSum(arr[i], COLS));
    fclose(fw);

    printf("\nRow sums written to row_sum.txt\n");
    return 0;
}
