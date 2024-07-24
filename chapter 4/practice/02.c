#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (int i = n * 10; i >= n; i = i - n)
    {
        printf("%d\n", i);
    }
}