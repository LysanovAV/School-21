#include <stdio.h>

int main()
{
    double a, b; 
    int sum, raz, pro, cha;
    if ((scanf("%lf %lf", &a, &b) != 2) || ((int)a != a || (int)b != b)) {
        printf("n/a");
    }
    else {
    sum = a + b;
    printf("%d ", sum);
    raz = a - b;
    printf("%d ", raz);
    pro = a * b;
    printf("%d ", pro);
    
    if (b == 0) {
        printf("n/a");
    }
    else {
        cha = a / b;
        printf("%d", cha);
    }
    }

    return 0;
}