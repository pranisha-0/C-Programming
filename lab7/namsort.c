#include <stdio.h>
void swap(char *a[], int i, int j) {
    char *temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main() {
    
}