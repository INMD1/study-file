#include <stdio.h>
int main(void)
{
    int ar[100][100];
    int a, b, c;
    int d, e;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        scanf("%d", &c);

        for ( d = 0; d < b; d++)
        {
            for (e = 0; e < c ; e++)
            {
                scanf("%d", &ar[d][e]);
            }
        }

        for (d = 0; d < c; d++)
        {
            for (e = 0; e < b; e++)
            {
                printf("%d ", ar[e][d]);
            }
            printf("\n");
        }
    }
    return 0;
}
