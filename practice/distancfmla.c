#include <stdio.h>
#include <math.h>
int main() {
    int x1, x2, y1, y2;
    float dist;
    printf("Enter x1 x2 points: ");
    scanf("%d%d", &x1, &x2);
    printf("Enter y1 y2 points: ");
    scanf("%d%d", &y1, &y2);
    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
printf("Distance between two points is: %f", dist);
    return 0;
}