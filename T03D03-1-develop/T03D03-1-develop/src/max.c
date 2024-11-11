#include <stdio.h>
int max(int a, int b);

int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    if ((int)num1==num1 && (int)num2==num2){
        int x=num1;
        int y=num2;
        printf("%d\n", max(x,y));
        }
    
    else {
        printf("n/a\n");
        }
        
    return 0;
}

int max(int a, int b){
    int res;
    if(a > b){
        res = a;
    }
    else {
        res = b;
    }
    
    return res;
}