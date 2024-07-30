#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING INTEGER
    // int a = 7;
    // int *ptr = &a;

    // printf("The adress of variable %d is %u\n", a, &a);
    // printf("The value of pointer %u\n", ptr);
    // ptr++;
    // printf("The value of pointer %u\n", ptr);

    // POINTER ARITHMETIC USING CHARACTER

    char a = '7';
    char *ptr = &a;

    printf("The adress of variable %d is %u\n", a, &a);
    printf("The value of pointer %u\n", ptr);
    ptr++;
    printf("The value of pointer %u\n", ptr);
}