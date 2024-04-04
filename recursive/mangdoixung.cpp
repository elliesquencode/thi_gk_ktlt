#include <stdio.h>

int doixung(int a[], int l, int r)
{
    if (l >= r)
        return 1;
    if (a[l] != a[r])
        return 0;
    return doixung(a, l + 1, r - 1);
}
int main()
{
    int a[] = {1, 2, 3, 4, 3, 5, 1};
    int n = sizeof(a) / sizeof(*a);
    printf("%d", doixung(a, 0, n - 1));
    return 0;
}