#include <stdio.h>

int referFun(int *);

int referFun(int *a)
{
    return *a = 10;
}
int main()
{
    int a;
    referFun(&a);
    printf("The value of a is %d\n", a);
}