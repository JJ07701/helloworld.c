#include<stdio.h>
int main() {
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    num1 = num1 + num2;
    printf("the sum of the two numbers is: %d\n", num1);
    return 0;
}