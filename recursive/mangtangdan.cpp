#include <stdio.h>

int check(int a[], int n)
{
    if (n == 1)
        return 1;
    if (a[n - 1] <= a[n - 2])
        return 0;
    return check(a, n - 1);
}
int main()
{
    int a[] = {1, 2, 9, 4, 5};
    int n = sizeof(a) / sizeof(*a);
    printf("%d", check(a, n));
    return 0;
}