#include <stdio.h>
int sum(int arr[][10], int row, int cols) {
    int sum = 0;
    for(int j = 0; j<cols; j++) {
        sum += arr[row][j];
    }
    return sum;
}
int main() {
    int arr[10][10];
    int rows, cols;
 
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements: ");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\n Sum of each row: \n");
    for(int i=0; i<rows; i++) {
        
    }
}