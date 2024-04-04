#include <stdio.h>

int check(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return 1;
        return 0;
    }
    else
    {
        if (n % 10 % 2 == 0)
            return 1;
        return 0;
    }
}

int main()
{
    int n = 6547;
    printf("%d", check(n));
    return 0;
}