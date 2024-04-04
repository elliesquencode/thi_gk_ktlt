#include <stdio.h>
#include <stdlib.h>

void convert(int n)
{
    if (n == 0)
        return;
    convert(n / 16);
    int remainder = n % 16;
    if (remainder < 10)
    {
        printf("%d", remainder);
    }
    else
    {
        printf("%c", (char)(remainder + 55));
    }
}

int main()
{
    int n = 955;
    convert(n);
    printf("\n");
    return 0;
}
