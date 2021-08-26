#include<stdio.h>

int main() {
    int a, b = 1, c, i, j;
    scanf("%d", &c);
    for (int o = 1; o <= c; o++)
    {
        scanf("%d", &a);
        for (i = 0; i + 1 <= a ; i++)
        {
            for (j = a - i -1; j > 0; j--)
            {
                printf(" ");
            }
            for (j = 0; j <= i * 2; j++)
            {
                printf("%d", b);
            }
            if (a == i + 1 &&  o == c) {
                return 0;
            }
            else {
                printf("\n");
            }
            b++;
        }
        b = 1;
    }
}