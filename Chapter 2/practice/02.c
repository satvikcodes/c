#include <stdio.h>

int main()
{
    float a, b, c;
    printf("A MARKS: ");
    scanf("%f", &a);
    printf("B MARKS: ");
    scanf("%f", &b);
    printf("C MARKS: ");
    scanf("%f", &c);
    float sum = a + b + c;
    if (sum / 3 > 0.4 && a / 100 > .33 && b / 100 > .33 & c / 100 > .33)
    {
        printf("You are passed\n");
    }
    else
    {
        printf("you are failed\n");
    }
}