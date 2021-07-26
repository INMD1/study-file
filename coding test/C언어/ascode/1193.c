#include <stdio.h>
#include <math.h>
 
int main() {
    int count;
    int a, b, c, D;
    double v, e, p;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        D = b * b - 4 * a * c;
        e = sqrt(D);
        if (a == 0) {
            printf("No quadratic\n");
        }
        else {
            if (D > 0) {
                printf("Real\n");
            }
            else if (D == 0) {
                v = (-b) / (2.0 * a);
                printf("%.3f\n", v);
            }
            else if (D < 0) {
                printf("Imaginary\n");
            }
        }
    }
    return 0;
}