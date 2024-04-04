#include <stdio.h>

void in1(int a[], int n)
{
    if (n == 0)
        return;
    printf("%d ", a[n - 1]);
    in1(a, n - 1);
}
void in2(int a[], int n)
{
    if (n == 0)
        return;
    in2(a, n - 1);
    printf("%d ", a[n - 1]);
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(*a);
    in1(a, n);
    printf("\n");
    in2(a, n);
    return 0;
}