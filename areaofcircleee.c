#include<stdio.h>
int main() {
    float radius,area;
    printf("enter radius of the circle:");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("area of the circle is: %.2f\n",area);
    return 0;
}