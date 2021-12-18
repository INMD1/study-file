#include <stdio.h>

int main(void)
{
    int test, a, b;
    scanf("%d", &test);
    for (int i = 0; i < test; i++){
        int n = 1, k = 1, c = 1;
        scanf("%d %d", &a, &b);
        for (int i = 1; i <= a; i++)
        {
            n *= i;
        }
        for (int i = 1; i <= b; i++)
        {
            k *= i;
        }
        for (int i = 1; i <= (a-b); i++)
        {
            c *= i;
        }
        printf("%d\n", n / (k * c));

    }
    return 0;
}