#include <stdio.h>
 
double fun();
 
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if ((x * x) + (y * y) < 25) {
        printf("GOTCHA");
    }
    else{
       printf("MISS");
    }
    return 0;
}