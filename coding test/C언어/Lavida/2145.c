#include<stdio.h>

int main() {
    int a, c, x, d = 0, v;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int arr[20][20] = { 0, };

        scanf("%d", &c);

        for (int y = 0; y < c; y++)
        {
            for (x = 0; x < c; x++)
            {
                if (x <= c / 2 && x <= y) {
                    d++;
                }
                arr[y][x] = d;
            }
            d = 0;
        }

        d = 0;
        for (int y = 0; y < c; y++)
        {
            for (x = 0; x < c; x++) {
                if (x < c - d) {
                }
                else {
                    arr[y][x] = arr[c - y - 1][c - x - 1];
                }
            }
            d++;
        }
        d = 0;

        for (int y = 0; y < c; y++)
        {
            for (x = 0; x < c; x++)
            {
                printf("%d", arr[y][x]);
            }
            printf("\n");
        }
        printf("\n");

    }
}