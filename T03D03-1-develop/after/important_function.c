#include <stdio.h>
#include <math.h>

double func(double x);

int main()
{
    double a;
    if ((scanf("%lf", &a) != 1) || (int)a != a) {
        printf("n/a");
    }
    else {
        printf("%.1lf", func(a));
    }
    return 0;
}

double func(double x) {
    double y;
    y = 7e-3 * pow(x, 4) + ((22.8 * pow(x, (1 / 3)) - 1e3) * x + 3) / (x * x / 2) - x * pow((10 + x), (2/x)) - 1.01;

    return y;
}