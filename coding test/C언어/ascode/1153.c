#include <stdio.h>
#include <math.h>
 
int main() {
    int a, b, c, D;
    double v, e, p;
    for (; ;)
    {
        scanf("%d %d %d", &a, &b, &c);
        D = b * b - 4 * a * c;
        e = sqrt(D);
        if (a == 0 && b == 0 && c == 0) {
            return 0;
        }
        else if (a == 0) {
            printf("NO!\n");
        }else {
            if (D > 0) {
                printf("REAL\n");
            }
            else if (D == 0) {
                v = (-b) / (2.0 * a);
                printf("MUL\n", v);
            }
            else if (D < 0) {
                printf("IMG\n");
            }
        }
    }
    return 0;
}