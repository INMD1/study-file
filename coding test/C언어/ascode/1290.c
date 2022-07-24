#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int j;
    while (1)
    {
        int set0, set1, set2, set3;
        int setarr1[11][11] = { 0, },
                              setarr2[11][11] = { 0, },
                                                outarr[11][11] = { 0, };
        int count = 0, re = 0;
        scanf("%d %d", &set0, &set1);
        if (set0 == 0 && set1 == 0) {
            break;
        }
        for (int i = 0; i < set0; i++)
        {
            for (j = 0; j < set1; j++)
            {
                scanf("%d", &setarr1[i][j]);
            }
        }
        scanf("%d %d", &set2, &set3);
        for (int i = 0; i < set2; i++)
        {
            for (j = 0; j < set3; j++)
            {
                scanf("%d", &setarr2[i][j]);
            }
        }

        if ((set0 * set1) != (set2 * set3)) {
            printf("Impossible\n");
        }
        else {
            for (int i = 0; i < set0; i++)
            {
                for (j = 0; j < set1; j++)
                {
                    outarr[i][j] = setarr1[i][j] - setarr2[i][j];
                    if (outarr[i][j] == 0) {
                        count++;
                    }
                }
            }
            for (int i = 0; i < set0; i++)
            {
                for (j = 0; j < set1; j++)
                {
                    re += outarr[i][j];
                }

            }
            if(re == 0) {
                printf("Zero Matrix\n");
            } else {
                for (int i = 0; i < set0; i++)
                {
                    for (j = 0; j < set1; j++)
                    {
                        printf("%d ", outarr[i][j]);
                    }
                    printf("\n");
                }
            }
        }

    }
}