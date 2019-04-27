#include <stdio.h>

int factorial(int x)
{
    int f = x;

    if (x > 1)
    {
        f *= factorial(x - 1);
    }

    return f; 
}

int main() 
{
    int n = factorial(5);
    printf("%d\n", n);

    return 0;
}