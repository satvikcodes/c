#include <stdio.h>

void swap(int *, int *);
void swap(int *x, int *y)
{
    int *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
}
int main()
{
    int a = 4;
    int b = 5;
    swap(&a, &b);
    printf("The value of a: %d and b: %d\n", a, b);
}