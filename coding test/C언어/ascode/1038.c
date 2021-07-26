#include <stdio.h>

int main() {
    double a, b;
    double c;
    scanf("%lf %lf", &a, &b);
    c = a * b / 2;
    printf("%.10f", c);
    return 0;
}