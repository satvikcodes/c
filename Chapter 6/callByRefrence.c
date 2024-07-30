#include <stdio.h>

int multiplyFun(int *, int *);

int multiplyFun(int *a, int *b)
{
    *a = 100; // it is changing the value of a
    return (*a * *b);
}
int main()
{
    int a = 10;
    int b = 10;

    printf("Multiplication of %d & %d is - %d\n", a, b, multiplyFun(&a, &b));
    printf("Value of a is %d\n", a);
}