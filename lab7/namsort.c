#include <stdio.h>
#include <string.h>

void sort(char a[][20], int n);

int main() {
    char a[5][20]; // 5 names, max length 20
    int i;

    printf("Enter the list of 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", a[i]); // Simpler alternative to gets()
    }

    sort(a, 5);

    printf("\nThe sorted names are:\n");
    for(i = 0; i < 5; i++) {
    puts(a[i]);
    }
    return 0;
}

void sort(char a[][20], int n) {
    int i, j;
    char temp[20];
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(a[i], a[j]) > 0) { // Alphabetical comparison
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);

            }
        }
    }
} flowcrt