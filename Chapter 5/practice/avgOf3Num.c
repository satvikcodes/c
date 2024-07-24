#include <stdio.h>

int avgFun(int, int, int);

int avgFun(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    int a, b, c;
    printf("Enter your numbers - ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Avg %d, %d and %d is %d\n", a, b, c, avgFun(a, b, c));
}