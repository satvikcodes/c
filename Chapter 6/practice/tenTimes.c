#include <stdio.h>

int tenTimesFun(int *);
int tenTimesFun(int *a)
{
    *a = 10 * *a;
    return *a;
}
int main()
{
    int a = 10;
    tenTimesFun(&a);
    printf("The value of a is : %d\n", a);
}