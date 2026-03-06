#include <stdio.h>
#include <string.h>
typedef struct emp {
    char nam[25];
    int id, salary;
} emp;
void sort(emp e[], int n) {
    int i, j;
    emp temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (e[i].salary < e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}

void main() {
    emp e[9];
    int i, a, j;
    printf("Enter number of employees: ");
    scanf("%d", &a);
    printf("Enter name, id and salary of employees: \n");
    for (i = 0; i < a; i++) {
        scanf("%s %d %d", e[i].nam, &e[i].id, &e[i].salary);
    }
    printf("\nEmployees sorted by salary (descending):\n");
    sort(e, a);
    for(j = 0; j < a; j++) {
        printf("Name: %s, ID: %d, Salary: %d\n", e[j].nam, e[j].id, e[j].salary);
    }

}