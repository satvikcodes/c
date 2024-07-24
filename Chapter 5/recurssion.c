#include <stdio.h>

int factorial(int);

int factorial(int a)
{
    if (a == 1 || a == 0) // base condition
    {
        return 1;
    }
    return factorial(a - 1) * a;
}
int main()
{

    int a = 4;
    printf("The factorial of %d is %d\n", a, factorial(a));
}