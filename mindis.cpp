#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14
typedef struct
{
    char name;
    int x, y, z;
} point3D;

void minDis(point3D a[], int n)
{
    double dis = 1e9;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double temp = sqrt(pow(a[i].x - a[j].x, 2) + pow(a[i].y - a[j].y, 2) + pow(a[i].z - a[j].z, 2));
            if (dis > temp)
            {
                dis = temp;
            }
        }
    }
    printf("smallest distance between 2 point is: %.2lf\n", dis);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double temp = sqrt(pow(a[i].x - a[j].x, 2) + pow(a[i].y - a[j].y, 2) + pow(a[i].z - a[j].z, 2));
            if (dis == temp)
            {
                printf("%c(%d, %d, %d) va %c(%d, %d, %d)\n", a[i].name, a[i].x, a[i].y, a[i].z, a[j].name, a[j].x, a[j].y, a[j].z);
            }
        }
    }
}
int main()
{
    point3D a[] = {{'A', -1, -1, -1}, {'B', -1, -1, 0}, {'C', -1, -1, 1}, {'D', -1, 0, -1}, {'E', -1, 0, 0}, {'F', -1, 0, 1}, {'G', -1, 1, -1}, {'H', -1, 1, 0}};
    int n = 8;
    minDis(a, n);
    return 0;
}