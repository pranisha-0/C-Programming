//array of structures
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     struct std
//     {
//        char name[20];
//        int age;
//        float marks;
//     }s[n];
//     for(int i=0; i<n; i++) {
//         printf("Values: name, age, marks: ");
//     scanf("%s%d%f", s[i].name, &s[i].age, &s[i].marks);
//     }
//     for(int i=0; i<n; i++) {
//          printf("name: %s \nage: %d\nmarks: %.2f", s[i].name, s[i].age, s[i].marks);
//     }
// }

//structure using pointer
#include <stdio.h>
int main() {
    struct std
    {
       char name[20];
       int age;
       float marks;
    }s;
    struct std *sp;
    sp=&s;
        printf("Values: name, age, marks: ");
        scanf("%s%d%f", s.name, &s.age, &s.marks);
        printf("name: %s \nage: %d\nmarks: %.2f", sp->name, sp->age, sp->marks);
}