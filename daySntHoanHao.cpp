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
    int cnt = 0, j = 0;
    for (int i = 0; i < 2000; i++)
    {
        if (j == 10)
        {
            printf("\n");
            j = 0;
        }
        if (isPerPrime(i) == 1)
        {
            printf("%d ", i);
            ++cnt;
            j++;
        }
    }
    printf("\nso luong so nguyen to hoan hao tu 1 den 2000 bang: %d", cnt);
    return 0;
}