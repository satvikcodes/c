#include <stdio.h>

int main()
{
    int age[] = {20, 45, 27, 38};
    int *ptr = age;

    printf("The address and value are %d, %d\n", (ptr + 2), *(ptr + 2));
}