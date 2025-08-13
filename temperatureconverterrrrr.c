#include<stdio.h>
int main() {
    float celcius,fahrenheit;
    printf("enter temperature in celcius:"44);
    scanf("%f",&celcius);
    fahrenheit = (celcius*9/5)+32;
    printf("temperature in fahrenheit is: %.2f\n",fahrenheit);
    return 0;
}