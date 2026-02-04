#include <stdio.h>
int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    // scanf("%s %d", str, sizeof(str));
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
