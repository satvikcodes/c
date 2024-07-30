#include <stdio.h>

int addressFunction(int);

int addressFunction(int a)
{
    return &a;
}
int main()
{
    int a = 7;
    int *b = &a;

    printf("Address of a = %d with value = %d\n", b, *b);
    printf("Address of a from function = %d \n", addressFunction(a));
}