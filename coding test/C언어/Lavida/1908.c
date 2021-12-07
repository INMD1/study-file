#include <stdio.h>

int ar[501][501], result[1003];
int count, a, b, con = 0;
int i, j, temp;

void fix1() {
    for (int c = 0; c < a; c++) {
        for (i = 0; i < b; i++) {
            for (j = 0; j < b - 1 - i; j++)
            {
                if (ar[c][j] < ar[c][j + 1]) {
                    temp = ar[c][j];
                    ar[c][j] = ar[c][j + 1];
                    ar[c][j + 1] = temp;
                }
            }
        }
    }
    con = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (j == 0 || j == b - 1) {
                result[con] = ar[i][j];
                con++;
            }
        }
    }
    for (i = 0; i < a * 2; i++)
    {
        for (j = 0; j < a * 2 - 1 - i; j++)
        {
            if (result[j] < result[j + 1]) {
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
}

int main() {

    scanf("%d", &count);
    for (int p = 0; p < count; p++)
    {
        scanf("%d %d", &a, &b);
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }
        fix1();

        for (i = 0; i < a * 2; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");


    }
    return 0;
}