#include <stdio.h>
int sumFun(int *, int *);
int avgFun(int *, int *);

int sumFun(int *a, int *b)
{
    return *a + *b;
}

int avgFun(int *a, int *b)
{
    return (*a + *b) / 2;
}
int main()
{
    int a = 5, b = 5, sum, avg;
    sum = sumFun(&a, &b);
    avg = avgFun(&a, &b);
    printf("sum = %d, avg = %d\n", sum, avg);
}