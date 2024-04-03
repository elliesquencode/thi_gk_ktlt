#include <stdio.h>

int sum(int n)
{
    if (n < 10)
        return n;
    return (n % 10) + sum(n / 10);
}

int main()
{
    int n = 123;
    int a = sum(n);
    printf("%d", a);
    return 0; // Added return 0; to indicate successful termination of the program
}
