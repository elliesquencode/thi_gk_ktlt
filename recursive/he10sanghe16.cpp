#include <stdio.h>
#include <stdlib.h>
void convert(int n)
{
    if (n == 0)
        return;
    convert(n / 16);
    int r = n % 16;
    if (r < 10)
    {
        printf("%d", r);
    }
    else
    {
        printf("%c", (char)(r + 55));
    }
}
int main()
{
    int n = 995;
    convert(n);
    return 0;
}