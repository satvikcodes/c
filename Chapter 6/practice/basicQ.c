#include <stdio.h>

int main()
{
    int a = 7;
    int *b = &a;

    printf("Address of a = %d with value = %d\n", b, *b);
}