#include <stdio.h>
int m1, m2, m3;
int solve(int n)
{
    if (n == 1)
        return 0;
    int cnt1 = 1e9, cnt2 = 1e9, cnt3 = 1e9;
    if (n % 2 == 0)
    {
        cnt1 = 1 + solve(n / 2);
    }
    if (n % 3 == 0)
    {
        cnt2 = 1 + solve(n / 3);
    }
    if (n > 1)
    {
        cnt3 = 1 + solve(n - 1);
    }
    // printf("%d %d %d\n", cnt1, cnt2, cnt3);
    m1 = cnt1;
    m2 = cnt2;
    m3 = cnt3;
    int min = cnt1;
    if (cnt2 < min)
    {
        min = cnt2;
    }
    if (cnt3 < min)
    {
        min = cnt3;
    }
    return min;
}
void print(int m1, int m2, int m3)
{
    printf("%d %d %d", m1, m2, m3);
}
int main()
{
    int n = 38;
    printf("%d", solve(n));
    printf("\n");
    print(m1, m2, m3);
    return 0;
}