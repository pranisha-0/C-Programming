#include <stdio.h>
int main() {
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);
    if(yr%4 != 0) 
        printf("%d isn't a leap year. \n", yr); 
    else if(yr%100 !=0) 
        printf("%d is a leap year. \n", yr);
    else if(yr%400 == 0) 
        printf("%d is a leap year. \n ", yr);
    else 
        printf("%d isn't a leap year. \n", yr);
return 0;
}