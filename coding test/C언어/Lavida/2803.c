#include<stdio.h>

int main() {
    int a, c, x, v;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        int arr[20][20] = { 0, };
        int save[10] = { 'A','B','C', 'G', 'J', 'L','M','P','T' };
        int d = -1;
        scanf("%d", &c);

        for (int y = 0; y < c; y++)
        {
            for (x = 0; x < c; x++)
            {
                if (x <= c / 2 && x <= y) {
                    d++;
                }
                arr[y][x] = save[d];
            }
            d = -1;
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
                printf("%c", arr[y][x]);
            }
            printf("\n");
        }
        printf("\n");

    }
}