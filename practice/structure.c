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
// #include <stdio.h>
// int main() {
//     struct std
//     {
//        char name[20];
//        int age;
//        float marks;
//     }s;
//     struct std *sp;
//     sp=&s;
//         printf("Values: name, age, marks: ");
//         scanf("%s%d%f", s.name, &s.age, &s.marks);
//         printf("name: %s \nage: %d\nmarks: %.2f", sp->name, sp->age, sp->marks);
// }

//structure passing infunction
// #include <stdio.h>
// struct info{
//     char name[10];
//     int age;
// }s;
// void display(struct info i1) {
//     printf("name =%s, age =%d. \n", i1.name, i1.age);
// }
// int main() {
//     printf("name, age: ");
//     scanf("%s %d", s.name, &s.age);
//     display(s);
// }

//passing array of structures in fn
// #include <stdio.h>
// struct info{
//     char nam[20];
//     int age;
// }s[4];
// void disp(struct info s1[]) {
//     for(int i=0; i<4; i++) {
//         printf("%s, %d \n", s[i].nam, s[i].age);
//     }
// }
// int main() {
//     for(int i=0; i<5; i++) {
//         printf("enter name and age: ");
//         scanf("%s %d", s[i].nam, &s[i].age);
//     }
//     disp(s);
// }

//