#include <stdio.h>

int main(void)
{
    int Test_Case, a, b, c, d, r;
    scanf("%d", &Test_Case);
    while (Test_Case--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        r = d % c;
        if (r == 0) {
            printf("%d", d * (d / c)); //등비수열
        }
        else {
            printf("%d", d + (d - c)); //등차수열 일반항
        }
        printf("\n");
    }
    return 0;
}