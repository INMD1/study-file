#include <stdio.h>

int main() {
    int a,b,c,j,i,arr[11][11], ar[11][11], result = 0;
    scanf("%d", &a);
    for (int v = 0; v < a; v++)
    {
        scanf("%d %d", &b, &c);
        for ( j = 0; j < b; j++)
        {
            for (int i = 0; i < c; i++)
            {
                scanf("%d", &arr[j][i]);
                ar[j][i] = arr[j][i];
            }
        }
        for (j = 0; j < b; j++)
        {
            for ( i = 0; i < c; i++)
            {
                if (arr[j][i] == ar[i][j]) {
                    result++;
                }
            }
        }
        if (b * c == result) {
            printf("Identical\n");
            result = 0;
        }
        else {
            for (j = 0; j < c; j++)
            {
                for ( i = 0; i < b; i++)
                {
                    printf("%d ", ar[i][j]);
                }
                printf("\n");
            }
            result = 0;
        }
    }
}