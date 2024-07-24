#include <stdio.h>

int main()
{
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);

    if (income < 250000)
    {
        printf("no tax \n");
    }
    else if (income > 250000 && income < 500000)
    {
        printf("tax amount - %f", 0.05 * income);
    }
    else if (income > 500000 && income < 1000000)
    {
        printf("tax amount - %f", 0.2 * income);
    }
    else if (income > 1000000)
    {
        printf("tax amount - %f", 0.3 * income);
    }
}