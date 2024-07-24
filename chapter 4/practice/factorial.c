#include <stdio.h>

int main()
{
    int n, product = 1, i = 1;
    printf("Please Enter Your Number - ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     product = product * i;
    // }

    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, product);
}