#include <stdio.h>
#include <stdlib.h>
void convert(int n)
{
    if (n / 2 == 0)
    {
        // printf("%d", n % 2);
        return;
    }
    convert(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int n = 170;
    convert(n);
    return 0;
}