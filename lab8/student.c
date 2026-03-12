#include <stdio.h>

// a) Define structure Student
struct Student {
    int roll;
    char name[50];
    float marks[3];
    float avg;
};

// Function to read details of all students using pointer
void readStudents(struct Student *s, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &(s + i)->roll);
        printf("Enter name: ");
        scanf("%s", (s + i)->name);
        for (j = 0; j < 3; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%f", &(s + i)->marks[j]);
        }
    }
}

// c) Function to compute average using pointer to structure
void computeAverage(struct Student *s) {
    s->avg = (s->marks[0] + s->marks[1] + s->marks[2]) / 3.0;
}

int main() {
    int n, i;
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // b) Read student details using pointer function
    readStudents(s, n);

    // c) Compute average for each student
    for (i = 0; i < n; i++) {
        computeAverage(&s[i]);
    }

    // d) Write all records to students.txt
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%d %s %.2f %.2f %.2f %.2f\n",
                s[i].roll, s[i].name,
                s[i].marks[0], s[i].marks[1], s[i].marks[2],
                s[i].avg);
    }
    fclose(fp);
    printf("\nRecords written to students.txt successfully.\n");

    // e) Reopen file, read records, display students with avg >= 60
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student temp;

    printf("\n===== Students with Average >= 60 =====\n");
    printf("%-10s %-15s %-10s %-10s %-10s %-10s\n",
           "Roll", "Name", "Sub1", "Sub2", "Sub3", "Average");
    printf("------------------------------------------------------------------\n");

    while (fscanf(fp, "%d %s %f %f %f %f",
                  &temp.roll, temp.name,
                  &temp.marks[0], &temp.marks[1], &temp.marks[2],
                  &temp.avg) == 6) {
        if (temp.avg >= 60.0) {
            printf("%-10d %-15s %-10.2f %-10.2f %-10.2f %-10.2f\n",
                   temp.roll, temp.name,
                   temp.marks[0], temp.marks[1], temp.marks[2],
                   temp.avg);
        }
    }

    fclose(fp);
    return 0;
}
