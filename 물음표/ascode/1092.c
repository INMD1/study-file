#include <stdio.h>

int main()
{
    int a = 0, b = 0,c = 0, d = 0, h = 0, p = 0;
    while (1)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        h = (a * c) + ((b * d) * -1);
        p = (a * d) + (b * c);
        if (h == 0 & p != 0) {
            printf("Imaginary\n");
        }
        else if (h != 0 & p == 0) {
            printf("Real\n");
        }
        else if (h != 0 & p != 0) {
            printf("Complex\n");
        }
        if (a == 0 & b == 0 & c == 0 & d == 0) {
            return 0;
        }
    }
    return 0;
}