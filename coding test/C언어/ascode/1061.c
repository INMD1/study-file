#include <stdio.h>
#include <math.h>

int main() {
	double a = 0, b = 0, c = 0, d = 0, e;

	scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4.0 * a * c;//판별식
    if (d > 0)
    {
        e = sqrt(d);
        printf("%.4f %.4f", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
    }
    else
    {
        if (d == 0)
        {
            printf("%.4f", (-b) / (2.0 * a));
        }
        else
        {
            printf("imaginary");
        }
    }
    return 0;
}