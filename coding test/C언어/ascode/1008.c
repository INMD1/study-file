#include <stdio.h>
int main (){
    double a, b, c, d, e, f;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    printf("%.4f", (a+b+c+d+e+f)/6);
    return 0;
}