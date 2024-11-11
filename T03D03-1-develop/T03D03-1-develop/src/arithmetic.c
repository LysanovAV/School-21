#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    if ((int)num1==num1 && (int)num2==num2){
        int x=num1;
        int y=num2;
        if(y!=0){
            printf("%d %d %d %d\n", sum(x,y), dif(x,y), mul(x,y), div(x,y));
        }
        else {
            printf("%d %d %d n/a\n", sum(x,y), dif(x,y), mul(x,y));
        }
        }
    else {printf("n/a\n");
    }
  
    return 0;
}
int sum(int a, int b){
    return a + b;
}

int dif(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}