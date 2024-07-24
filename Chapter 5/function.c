#include <stdio.h>

int multiply(int, int); // Function Prototype

int multiply(int a, int b) // Function Declaration
{
    return a * b;
}

int main()
{
    int num = multiply(7, 3); // Function Call
    printf("Ans %d\n", num);
}