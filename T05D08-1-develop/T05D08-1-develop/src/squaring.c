#include <stdio.h>
#define NMAX 10

int input(int *a, int n);
void output(int *a, int n);
void squaring(int *a, int n);

int main() {
    int n, data[NMAX];
    char temp;
    if (scanf("%d%c", &n, &temp) != 2 || temp != '\n') {
        printf("n/a\n");
        return 1;
    }
    if (n < 1 || n > NMAX) {
        printf("n/a\n");
        return 1;
    }
    int m = input(data, n);
    if (m == 1) {
        printf("n/a\n");
        return 1;
    }
    squaring(data, n);
    output(data, n);
    return 0;
}

int input(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        if (scanf("%d", p) != 1) return 1;
    }
    return 2;
}

void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

void squaring(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        *p = *p * *p;
    }
}
