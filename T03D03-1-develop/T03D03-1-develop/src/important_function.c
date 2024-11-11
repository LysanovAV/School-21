#include <stdio.h>
#include <math.h>

int main(){
    float num, res;
    if (scanf("%f", &num)!=1) {
        printf("n/a\n");
        return 0;
    }
    
    res = 7e-3 * pow(num,4) + ((22.8 * pow(num, 1/3) - 1e3) * num +3) / (num * num / 2) - num * pow (10+num, 2/num) - 1.01;
    printf("%.1f\n", res);
    return 0;
    }
