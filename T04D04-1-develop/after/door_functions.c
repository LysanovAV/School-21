#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.1415927;
    for (double x = -PI; x <= PI; x += 0.1532485) {
        printf("%0.7lf | %0.7lf | %0.7lf | %0.7lf \n", x, (1 / (1 + pow(x, 2))), sqrt(sqrt(1 + 4 * pow(x, 2) * 1) - pow(x, 2) - 1), 1 / pow(x, 2));
    }


    return 0;
}