#include <stdio.h>

int main()
{
    char marks[5];
    printf("Enter subject Name Marks - ");

    for (int i = 0; i < 5; i++)
    {

        scanf("%s", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        printf("Your marks at %d position is %d\n", i, marks[i]);
    }
}