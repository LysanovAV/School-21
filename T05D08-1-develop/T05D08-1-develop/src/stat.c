#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
    int n, data[NMAX];
    if (input(data, &n) == 1) {
        printf("n/a");
        return 1;
    }
    output(data, n);
    output_result(max(data, n), min(data, n), mean(data, n), variance(data, n));

    return 0;
}
int input(int *a, int *n) {
    char temp;
    char temp2;
    if (scanf("%d%c", n, &temp) != 2 || temp != '\n' || *n < 1 || *n > NMAX) return 1;

    for (int *p = a; p - a < *n; p++) {
        if (scanf("%d", p) != 1) return 1;
    }
    if (scanf("%c", &temp2) && temp2 != '\n') return 1;
    return 0;
}
void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}
void output_result(int max_v, int min_v, double mean_v, double variance_v) {
    printf("%d ", max_v);
    printf("%d ", min_v);
    printf("%.6f ", mean_v);
    printf("%.6f ", variance_v);
}
int max(int *a, int n) {
    int max_m = *a;
    for (int *p = a; p - a < n; p++) {
        if (*p > max_m) {
            max_m = *p;
        }
    }
    return max_m;
}
int min(int *a, int n) {
    int min_m = *a;
    for (int *p = a; p - a < n; p++) {
        if (*p < min_m) {
            min_m = *p;
        }
    }
    return min_m;
}
double mean(int *a, int n) {
    double mean_m = 0.0;
    for (int *p = a; p - a < n; p++) {
        mean_m += *p;
    }
    return mean_m / n;
}
double variance(int *a, int n) {
    double disp = 0.0;
    double mm = mean(a, n);
    for (int *p = a; p - a < n; p++) {
        disp = disp + (*p - mm) * (*p - mm);
    }
    return disp / n;
}
