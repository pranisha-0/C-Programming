//string handling functions
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char a[10];
//     char b[10];
//     puts("ENter a string: ");
//     gets(a);
//     // int len;
//     // len = strlen(a);
//     // printf("the length of string is: %d. \n", len);
//     // strcpy(b, a);
//      puts("ENter a string: ");
//     gets(b);
//     // strcat(b, a);
//     // puts(b);
//     if(strcmp(a,b)>0) {
//         printf("%s is greater than %s. \n", a, b);
//     }
//     else if(strcmp(a, b) == 0) {
//         printf("%s is equal to %s. \n", a, b);
//     }
//     else{ 
//         printf("%s is smaller than %s. \n", a, b);
//     }
// }

//string sorting
#include <stdio.h>
#include <string.h>
int main() {
    char name[10][15], temp[15];
    int i, j, n;
    printf("Enter no of string:");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", name[i]);
    }
    for(i=0; i<=n; i++) {
        for(j=i+1; j<=n; j++) {
            if(strcmp(name[i], name[j])>0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(i=0; i<=n; i++) {
        printf("%s \t", name[i]);
    }
}