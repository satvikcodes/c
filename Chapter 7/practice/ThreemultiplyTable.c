#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d value of table - ", (i + 1));
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of tables are %d\n", arr[i][j]);
        }
        printf("\n");
    }
}