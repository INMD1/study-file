#include <stdio.h>
int main(void)
{
    int i, j;
    int a, b;
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%d", &b);
        for (int i = 0; i < b; i++) {
            for (int j = 0; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }

    }
    return 0;
}
