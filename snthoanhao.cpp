#include <stdio.h>

int check(int n, int divisor)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (divisor == 1)
        return 1;
    if (n % divisor == 0)
        return 0;
    return check(n, divisor - 1);
}
int sum(int n)
{
    if (n < 10)
        return n;
    return (n % 10) + sum(n / 10);
}
int isPrime(int n)
{
    return check(n, n / 2);
}

int isPerPrime(int n)
{
    if (isPrime(n) == 0)
        return 0;
    if (isPrime(n) == 1)
    {
        isPrime(sum(n) == 1);
        if (n < 10 && isPrime(n) == 1)
            return 1;
    }
    return isPerPrime(sum(n));
}
int main()
{
    int num = 101;
    printf("%d", isPerPrime(num));
    return 0;
}