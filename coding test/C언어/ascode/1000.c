#include <stdio.h>

int main() {
    int a, n;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            int with = 2 * i - 1;
            int temp = n;
            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < 2 * i - 1; k++)
            {
                if (k < (with / 2)) {
                    printf("%c", 64 + temp);
                    temp--;
                }
                else {
                    printf("%c", 64 + temp);
                    temp++;
                }
            }
            printf("\n");
        }
        for (int i = n - 1; i > 0; i--) {
            int with = 2 * i - 1;
            int temp = n;
            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < 2 * i - 1; k++)
            {
                if (k < (with / 2)) {
                    printf("%c", 64 + temp);
                    temp--;
                }
                else {
                    printf("%c", 64 + temp);
                    temp++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}