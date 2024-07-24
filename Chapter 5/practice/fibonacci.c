#include <stdio.h>

int fibonacci(int);

int fibonacci(int d)
{
    if (d == 1 || d == 2)
    {
        return d - 1;
    }
    return fibonacci(d - 1) + fibonacci(d - 2);
}

int main()
{
    int d;
    printf("Enter your number - ");
    scanf("%d", &d);

    printf("The fibonacci number at %d is %d\n", d, fibonacci(d));
}

/* Role of Recursion

Recursion is a technique where a function calls itself in order to solve a problem. In this code, recursion is used to break down the problem of finding the Fibonacci number at position d into smaller subproblems. Here’s how it works:

    1.	Base Case:
    •	The function directly returns a value for the first two positions (1 and 2).
    2.	Recursive Case:
    •	For positions greater than 2, the function calculates the Fibonacci number by summing the results of the same function for the two preceding positions (d - 1 and d - 2).

How Recursion Works in This Context

To understand how the recursion unfolds, consider calculating fibonacci(5):

    •	fibonacci(5) calls fibonacci(4) and fibonacci(3).
    •	fibonacci(4) calls fibonacci(3) and fibonacci(2).
    •	fibonacci(3) calls fibonacci(2) and fibonacci(1).
    •	fibonacci(2) and fibonacci(1) hit the base cases and return 1 and 0, respectively.

The recursion unwinds as follows:

    •	fibonacci(3) = fibonacci(2) + fibonacci(1) = 1 + 0 = 1
    •	fibonacci(4) = fibonacci(3) + fibonacci(2) = 1 + 1 = 2
    •	fibonacci(5) = fibonacci(4) + fibonacci(3) = 2 + 1 = 3

Thus, fibonacci(5) returns 3.

Summary

    •	The fibonacci function uses recursion to break the problem into smaller subproblems.
    •	The base case returns known Fibonacci values for positions 1 and 2.
    •	The recursive case calculates the Fibonacci number for a given position by summing the results of the previous two positions.
    •	The recursion continues until it reaches the base cases, then unwinds to produce the final result. */
