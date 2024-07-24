#include <stdio.h>

float tempFun(float);

float tempFun(float t)
{
    return (9 * t) / 5 + 32;
}

int main()
{
    float t;
    printf("Enter your temp in Celsius - ");
    scanf("%f", &t);

    printf("Your tem in fahrenheit is %.2f \n", tempFun(t));
}