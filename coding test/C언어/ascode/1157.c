#include<stdio.h>

int main() {
    int b, c;
        scanf("%d %d", &c, &b);
        for (int i = 1; i <= b; i++)
        {
            for (int d = 1; d <= c; d++)
            {
                if (i == 1 || i == b || d == 1 || d == c) {
                    printf("*");
                }
                else if (i == 2 || i == b - 1 || d == 2 || d == c - 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
}