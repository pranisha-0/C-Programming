#include <stdio.h>

int main() {
    char name[50], add[50], gen;
    
    puts("Enter your name: ");
    gets(name);

    puts("Enter address: ");
    gets(add);

    putchar("Enter gender {M/F}: ");
    gen = getchar();

    puts("\nYour details:\n");
    puts(name);
    puts(add);
    putchar(gen);
    putchar('\n');

    return 0;
}
