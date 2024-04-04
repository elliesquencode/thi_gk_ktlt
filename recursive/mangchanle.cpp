#include <stdio.h>

int check(int a[], int n)
{
    if (n == 1)
    {
        if (a[0] % 2 == 0)
            return 1;
        return 0;
    }
    if (a[n - 1] % 2 == 1)
        return 0;
    return check(a, n - 1);
}

int main()
{
    int a[] = {2, 4, 5, 8, 10};
    int n = sizeof(a) / sizeof(*a);
    printf("%d", check(a, n));
    return 0;
}