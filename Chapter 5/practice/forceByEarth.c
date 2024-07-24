#include <stdio.h>

float forceFun(float);

float forceFun(float m)
{
    return m * 9.8;
}
int main()
{
    float m;
    printf("Enter your Mass - ");
    scanf("%f", &m);

    printf("Force exerted by mass %.2f is %.2f \n", m, forceFun(m));
}