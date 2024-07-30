#include <stdio.h>

int main()
{
    int age[] = {19, 28, 30};
    int *ptr = &age[0];

    for (int i = 0; i < 3; i++)
    {
        printf("Your marks at %d is %d\n", i, *ptr);
        ptr++;
    }
}