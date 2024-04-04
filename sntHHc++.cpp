#include <iostream>
using namespace std;
bool check(int n, int divisor)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (divisor == 1)
        return true;
    if (n % divisor == 0)
        return false;
    return check(n, divisor - 1);
}

int sum(int n)
{
    if (n < 10)
        return n;
    return (n % 10) + sum(n / 10);
}

bool isPrime(int n)
{
    return check(n, n / 2);
}

bool isPerPrime(int n)
{
    if (!isPrime(n))
        return false;
    if (isPrime(n))
    {
        if (!isPrime(sum(n)))
            return false;
        if (n < 10 && isPrime(sum(n)))
            return true;
    }
    return isPerPrime(sum(n));
}

int main()
{
    int n = 191;
    if (isPerPrime(n))
    {
        cout << n << " is a perfect prime number.\n";
    }
    else
    {
        cout << n << " is not a perfect prime number.\n";
    }
    return 0;
}