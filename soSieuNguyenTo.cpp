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

int main()
{
    int n = 7331;
    int ans = isSuperPrime(n);
    printf("%d", ans);
    return 0;
}