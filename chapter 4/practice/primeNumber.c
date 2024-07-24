#include <stdio.h>
// #include <stdbool.h>
// #include <math.h>

int main()
{
    int n;
    // bool isPrime = true;
    printf("Enter number: ");
    scanf("%d", &n);

    // if (n < 2)
    // {
    //     printf("%d is not a prime number\n", n);
    // }

    // for (int i = 2; i <= sqrt(n); i++) // Divisor Pair Approach
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //     }
    // }

    // if (isPrime)
    // {
    //     printf("%d is a prime number\n", n);
    // }
    // else
    // {
    //     printf("%d is not a prime number\n", n);
    // }

    // NORMAL APPROACH

    int isPrime = 1;
    int i = 2;

    if (n < 2)
    {
        isPrime = 0;
    }
    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
        i++;
    }

    printf("%d\n", isPrime);
}
