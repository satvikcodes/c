#include <stdio.h>

int main()
{
    int a;
    int *b;

    printf("Give a Integer Value - ");
    scanf("%d", &a);

    b = &a;

    printf("Value of Integer is %u\n", *(&a));
    printf("Address of Integer is %u\n", &a);
    printf("Value of Pointer b is %u\n", *b);
    printf("Address of Pointer b is %u\n", &b);
}