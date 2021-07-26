#include <stdio.h>
int main (){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.3f %.3f %.2f", a,b,a*b);
    return 0;
}