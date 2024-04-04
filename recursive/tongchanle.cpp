#include <stdio.h>

int chan(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return n;
        return 0;
    }
    else
    {
        if (n % 10 % 2 == 0)
            return n % 10 + chan(n / 10);
        return chan(n / 10);
    }
}

int le(int n)
{
    if (n < 10)
    {
        if (n % 2 == 1)
            return n;
        return 0;
    }
    else
    {
        if (n % 10 % 2 == 1)
            return n % 10 + le(n / 10);
        return le(n / 10);
    }
}
int main()
{
    int a = 1234567;
    int b = chan(a);
    int c = le(a);
    printf("%d\n%d", b, c);
    return 0;
}