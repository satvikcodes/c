#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
}