#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14
typedef struct
{
    char name;
    int x, y, z;
} point3D;

void minGlobal(point3D A[], int n)
{
    double dis = 0; // Changed min to dis as dis seems to represent the distance
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double temp = sqrt(pow(A[i].x - A[j].x, 2) + pow(A[i].y - A[j].y, 2) + pow(A[i].z - A[j].z, 2));
            if (dis < temp)
            {
                dis = temp;
            }
        }
    }
    double r = dis / 2;
    double ans = (4.0 / 3) * pi * pow(r, 3);
    printf("%lf", ans);
}

int main()
{
    int n;
    scanf("%d", &n);
    point3D a[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i].name); 
        scanf("%d %d %d", &a[i].x, &a[i].y, &a[i].z);
    }
    minGlobal(a, n);
    return 0;
}
