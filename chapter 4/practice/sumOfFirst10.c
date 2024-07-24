#include <stdio.h>

int main()
{
    int n = 1, sum = 0;

    // while (n <= 10)
    // {

    //     printf("%d\n", n);
    //     sum = sum + n;
    //     n++;
    // }

    // for (n = 1; n <= 10; n++)
    // {
    //     sum += n;
    // }

    do
    {
        sum += n;
        n++;
    } while (n <= 10);

    printf("%d\n", sum);
}