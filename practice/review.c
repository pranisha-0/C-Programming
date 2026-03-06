#include <stdio.h>
#include <string.h>
void swap();
int main() {
    char nam[20];
    int n;
    printf("Enter no of students: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("\nEnter name: ");
        scanf("%s", nam[i]);
    }

    int a = sizeof(nam) / sizeof(nam[0]);

    for(int i=1; i<a; i++) {
        for(int j=0; j< a-i-1; j++) {
            swap();
        }
    }
    printf("Sorted namelist:\n ");
    for(int p=0; p<a; p++) {
        printf("%s", nam[p]);
    }
    void swap(); {
        int j;
        if(nam[j] > nam[j+1]) {
            int b = nam[j];
            nam[j] = nam[j+1];
            nam[j+1] = b;
        }
    }
}