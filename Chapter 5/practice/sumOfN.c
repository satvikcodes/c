#include <stdio.h>

int sumFun(int);

int sumFun(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sumFun(n - 1) + n;
}
int main()
{
    int n;
    printf("Enter your number - ");
    scanf("%d", &n);

    printf("Sum of %d number's is %d\n", n, sumFun(n));
}