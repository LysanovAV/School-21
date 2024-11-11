#include <stdio.h>
#define NMAX 10

int input(int *arr, int *n);
void output(int *arr, int n);
void squaring(int *arr, int n);

int main() {
    int n, data[NMAX];
    int result;

    result = input(data, &n);
    if (!result) {
        squaring(data, n);
        output(data, n);
    } else {
        printf("n/a");
        return 1;
    }
    return 0;
}

int input(int *arr, int *n) {
    scanf("%d", n);
    if (*n <= NMAX && *n > 0) {
        char ch;
        for (int *p = arr; p - arr < *n; p++) {
            scanf("%d", p);
            ch = getchar();
            if (ch != ' ') {
                if (ch == '\n' && p - arr + 1 == *n) {
                    return 0;
                } else {
                    return 1;
                }
            }
        }
    }
    return 1;
}

void output(int *arr, int n) {
    for (int *p = arr; p - arr < n; p++) {
        printf("%d", *p);
        if (p - arr + 1 < n)
            printf(" ");
    }
}

void squaring(int *arr, int n) {
    for (int *p = arr; p - arr < n; p++) {
        (*p) *= (*p);
    }
}