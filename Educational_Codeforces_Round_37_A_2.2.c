#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, x, y, p[200], time = 1, add, a[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        for (j = 0; j < y; j++)
        {
            scanf("%d", &p[j]);
        }
        add = p[0] - 1;
        for (j = 0; j < y - 1; j++)
        {
            if ((p[j + 1] - p[j]) / 2 > add)
            {
                add = (p[j + 1] - p[j]) / 2;
            }
        }
        if (x - p[y - 1] > add)
        {
            add = x - p[y - 1];
        }
        a[i] = time + add;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    system("pause");
    return 0;
}
