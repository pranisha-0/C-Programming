// #include <stdio.h>
// #include <math.h>
// /*
// e^x = sum (i= 0 to n) x^i/i!
// */
// int main( ) {
//     int i, j, n, x;
//     double deno, nume, sum = 0;
//     printf("Enter the value of x and n: ");
//     scanf("%d%d", &x, &n);

//     for (int i = 0; i < n; i++) //i to n
//     {
//         nume = pow(x, i); //x^i
//         deno = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             /* code */
//             deno *= j; //i!

//         }
//         sum += nume / deno; //sum = sum + (x^i/i!)
        
//     }
//     printf("Sum is: %lf", sum);
    

        

    
    
    
// }

///
//sum = (i=0 to n) X^i/i!
#include <stdio.h>
#include <math.h>
int main () {
    int i, j, n;
    double x, sum = 0.0, nume, deno;
    printf("Enter the value of x and n: ");
    scanf("%lf%d", &x, &n);
     for(i=0; i<n; i++) {
        nume = pow(x, i);
        deno = 1;
        for(j=1; j<=i; j++) {
            deno *= j;
        }
        sum += nume/deno;
     }
        printf("Sum is: %lf", sum);
        return 0;
}