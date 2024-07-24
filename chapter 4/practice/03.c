#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &n);
    for (int i = n; i <= n * 10; i += n)
    {
        sum += i * n;
    }
    printf("%d\n", sum);
}
