#include <stdio.h>

int main()
{
    int a, b, d = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            for (int i = 0; i < 2; i++)
            {
                for (int i = 0; i < 2*d; i++)
                {
                    printf("#");
                }
                printf("\n");
            }
            d++;
        }
        printf("\n");
        d = 1;

    }
    return 0;
}