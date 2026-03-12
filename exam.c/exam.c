#include <stdio.h>

int get_rowmax(int row[], int col_count) {
    int max = row[0];
    for (int i = 1; i < col_count; i++) {
        if (row[i] > max)
            max = row[i];
    }
    return max;
}

int main() {
    int arr[100][5];
    int row_count = 0;

   
    FILE *fp = fopen("random_integers.txt", "r");
    if (fp == NULL) {
        printf("cant open random_integers.txt\n");
        return 1;
    }


    int num;
    int col = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        arr[row_count][col] = num;
        col++;
        if (col == 5) {  
            col = 0;
            row_count++;
        }
    }
    fclose(fp);

    printf("Read %d rows of 5 colmns\n", row_count);
    int rowMax[100];
    for (int i = 0; i < row_count; i++) {
        rowMax[i] = get_rowmax(arr[i], 5);
        printf("Row %d max = %d\n", i + 1, rowMax[i]);
    }
    FILE *fq = fopen("row_max.txt", "w");
    if(fq == NULL) {
        printf("can't open file");
        return 1;
    }
    for(int i=0; i<row_count; i++) {
        fprintf(fq, "%d \n", rowMax[i]);
    }
    fclose(fq);
    printf("\nRow maximums written to row_max.txt\n");
    return 0;
}
