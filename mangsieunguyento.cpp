#include <stdio.h>
#include <math.h>
int check(int n, int divisor)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (divisor == 1)
        return 1;
    if (n % divisor == 0)
        return 0;
    return check(n, divisor - 1);
}

int isSuperPrime(int n)
{
    if (n == 0)
        return 1;
    if (check(n, n / 2) == 0)
    {
        return 0;
    }
    return isSuperPrime(n / 10);
}

int MinSPrime(int a[], int n)
{
    if (n == 1)
        return isSuperPrime(a[0]) ? a[0] : -1;
    return isSuperPrime(a[n - 1]) && (MinSPrime(a, n - 1) == -1 || a[n - 1] < MinSPrime(a, n - 1)) ? a[n - 1] : MinSPrime(a, n - 1);
}
int main()
{
    int min = 1e9;
    int a[] = {19, 7331, 2, 23, 233, 24, 131, 181, 191, 100};
    int n = sizeof(a) / sizeof(*a);
    int ans = MinSPrime(a, n);
    printf("%d", ans);
    return 0;
}