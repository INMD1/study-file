#include <stdio.h>

int main() {
    int a, b, c, j, i, arr[11][11], ar[11][11], result = 0;
    scanf("%d", &a);
    for (int v = 0; v < a; v++)
    {
        scanf("%d %d", &b, &c);
        for (j = 0; j < b; j++)
        {
            for (int i = 0; i < c; i++)
            {
                scanf("%d", &arr[j][i]);
                ar[j][i] = arr[j][i];
            }
        }
        if (b == c) {
            for (j = 0; j < c; j++)
            {
                for (i = 0; i < b; i++)
                {
                    printf("%d ", arr[j][i]);
                }
                printf("\n");
            }
        }else {
            for (j = 0; j < c; j++)
            {
                for (i = 0; i < b; i++)
                {
                    printf("%d ", ar[i][j]);
                }
                printf("\n");
            }
        }
    }
}