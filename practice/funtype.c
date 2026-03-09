// #include <stdio.h>
// int add(int x, int y);
// int main() {
//    int result = add(5,3);
//    printf("%d \n", result);
//     return 0;
// }
// int add(int x, int y) {
//     return x+y;
// }

//factorial of a number


//without return type and arguments
// #include <stdio.h>
// void fact();
// int main() {
//     fact();
// }
// void fact() {
//     int n, product = 1, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n < 0) {
//         printf("\n Doesnt exist.\n");
//     }
//     else {
//         for(i=1; i<=n; i++) {
//         product = product * i;
//     }
//     printf("\nThe factorial of %d is %d. \n", n, product);
//     }
// }


//without return type with arguments
// #include <stdio.h>
// void fact(int x);
// int main() {
//     int n, product = 1, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n < 0) {
//         printf("\n Doesnt exist.\n");
//     }
//     else{
//          fact(n);
//     }
// }
// void fact(int x) {
//    int product = 1, i;
//         for(i=1; i<=x; i++) {
//         product = product * i;
//         }
//     printf("\nThe factorial of %d is %d. \n", x, product);
// }


//with return type without arguments
// #include <stdio.h>
// int fact();
// int main() {
//     int res = fact();
//     printf("\nThe factorial is %d. \n", res);
//     return 0;
// }
// int fact() {
//     int product = 1, n, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//         for(i=1; i<=n; i++) {
//         product = product * i;
//     }
//       return product;
// }


//with return type with arguments
// #include <stdio.h>
// int fact(int a);
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n < 0) {
//         printf("\n Doesnt exist.\n");
//     }
//     else{
//         int res = fact(n);
//         printf("\nThe factorial of %d is %d. \n", n, res);
//     }
//     return 0;
// }
// int fact(int a) {
//     int product = 1, i;
// for(i=1; i<=a; i++) {
//         product = product * i;
//     }
//     return product;    
// }


//recursive function
#include <stdio.h>
int fact(int a);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int pr = fact(n);
    printf("The factorial is: %d. \n", pr);
}
int fact(int a) {
    if(a == 0) {
        return 1;
    }
    else if(a == 1) {
        return 1;
    }
    else {
        int res;
        res = a * fact(a-1);
        return res;
    }
}
