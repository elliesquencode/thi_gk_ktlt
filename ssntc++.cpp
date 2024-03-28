#include <iostream>
#include <cmath>
using namespace std;
bool check(int n, int divisor)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (divisor == 1)
        return true;
    if (n % divisor == 0)
        return false;
    return check(n, divisor - 1);
}
int isSuperPrime(int n)
{

    if (n == 0)
        return 1;
    if (!check(n, n / 2))
    {
        return 0;
    }
    return isSuperPrime(n / 10);
}

int main()
{
    int n = 233;
    int ans = isSuperPrime(n);
    cout << ans;
    return 0;
}