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
        if (isPrime(sum(n) == 0))
            return 0;
        if (n < 10 && isPrime(n) == 1)
            return 1;
    }
    return isPerPrime(sum(n));
}
int minPerfectPrime(int a[], int n)
{
    if (n == 1)
        return isPerPrime(a[0]) ? a[0] : -1;
    return isPerPrime(a[n - 1]) && (minPerfectPrime(a, n - 1) == -1 || a[n - 1] < minPerfectPrime(a, n - 1)) ? a[n - 1] : minPerfectPrime(a, n - 1);
}
int main()
{
    int a[] = {34, 35, 78, 23, 173, 693, 7, 1303, 34, 22, 46, 90, 911, 8177};
    int n = sizeof(a) / sizeof(*a);
    int ans = minPerfectPrime(a, n);
    printf("%d", ans);
    return 0;
}