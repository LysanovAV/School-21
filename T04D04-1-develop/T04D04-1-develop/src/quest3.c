#include <stdio.h>

int x(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return x(num - 1) + x(num - 2);
    }
}

int main() {
    int num, rez;
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("n/a\n");
        return 0;
    }
    rez = x(num);
    printf("%d\n", rez);
    return 0;
}
