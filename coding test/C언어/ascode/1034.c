#include <math.h>
#include <stdio.h>
int main() {
    long long n;
    int dec = 0, c = 0, rem, a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &n);
        while (n != 0) {
            rem = n % 10;
            n /= 10;
            dec += rem * pow(2, c);
            ++c;
        }
        printf("%c\n", dec);
        dec = 0, c = 0, rem = 0;
    }
    return 0;
}