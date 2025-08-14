#include<stdio.h>
int main() {
    float length, width, perimeter;
    printf("enter length of the reactangle:");
    scanf("%f", &length);
    printf("enter width of the rectangle:");
    scanf("%f", &width);
    perimeter = 2*(length+width);
    printf("perimeter of the rectangle is: %.2f\n", perimeter);
    return 0;
}