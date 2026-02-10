#include <stdio.h>
int main() {
    char str[100], *p=str;
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);
      p=str;

    while (*p != '\0') {
        len++;
        p++;
     }
    // p=str;

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
