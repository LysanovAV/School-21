#include <stdio.h>
int max(int a, int b);

int main()
{
    double a, b;
    if ((scanf("%lf %lf", &a, &b) != 2) || ((int)a != a || (int)b != b)) {
        printf("n/a");
    }
    else {
        printf("%d", max(a, b));
    
    }

    return 0;
}

int max(int a, int b) {
    int res;
       if (a > b){
        res = a;
    }
    else {
        res = b;
    } 
    return res;
}