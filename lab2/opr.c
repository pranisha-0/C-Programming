#include <stdio.h>
int main() {
  int a, b, c, d, e, f, result;
  printf("Enter a, b, c, d, e, f:");
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
  result = a+b*c>d&&e||++f;
  printf("Result = %d. \n", result);
  return 0;
}
// #include <stdio.h>
// int main() {
//   int a=8, b=5, c=3, d=6;
//   int result;
//   result = a+b<c!=d;
//   printf("res = %d \n", result);
//   return 0;
// }