#include <stdio.h>
int main (){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.6f, %.6f, %.6f", a,b,(a*b)/2);
    return 0;
}