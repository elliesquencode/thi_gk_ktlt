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
int sumOfDivisor(int n, int divi)
{
    static int sum = 0;
    if (divi == 0)
        return sum;
    if (n % divi == 0)
        sum += divi;
    return sumOfDivisor(n, divi - 1);
}

int isPerPrime(int n)
{
    if (n == sumOfDivisor(n, n - 1))
        return 1;
    return 0;
}
int main()
{
    int n = 28;
    int a = isPerPrime(n);
    printf("%d", a);
    return 0;
}