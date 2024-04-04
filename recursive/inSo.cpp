#include <stdio.h>

void in1(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    in1(n / 10);
    printf("%d ", n % 10);
}
void in2(int n)
{
    if (n < 10)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", n % 10);
    in1(n / 10);
}
int main()
{
    int n = 12105;
    in1(n);
    printf("\n");
    in2(n);
    return 0;
}