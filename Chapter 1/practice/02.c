// Find Simple Interest

#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter Principal Amount - ");
    scanf("%d", &p);
    printf("Enter Rate - ");
    scanf("%d", &r);
    printf("Enter Time - ");
    scanf("%d", &r);

    printf("Final Amount = %d\n", (p * r * t) / 100);
}