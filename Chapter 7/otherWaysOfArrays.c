#include <stdio.h>

int main()
{
    int age[3] = {21, 22, 90};
    for (int i = 0; i < 3; i++)
    {
        printf("Your age at %d is %d\n", i, age[i]);
    }
}