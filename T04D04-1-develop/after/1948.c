#include <stdio.h>
int pro_del(int num);

int main()
{
    double a;
    if ((scanf("%lf", &a) != 1) || ((int)a != a))
    {
        printf("n/a");
    }
    else
    {
        if (a < 0)
        {
            a *= -1;
        }
        printf("%d", pro_del(a));
    }
    return 0;
}

int pro_del(int num)
{
    int c, z;
    for (int i = num - 1; i >= 1; i--)
    {
        int b = num;
        while (b >= 1)
        {
            b = b - i;
        }
        if (b == 0)
        {
            c = i;
        }
        else
        {
            continue;
        }

        int y = 0;
        z = 0;
        for (int j = c - 1; j >= 1; j--)
        {
            int x = c;
            while (x >= 1)
            {
                x = x - j;
                if (x == 0)
                {
                    z++;
                }
            }
        }
        if (z == 1)
        {
            return c;
            break;
        }
    }
}