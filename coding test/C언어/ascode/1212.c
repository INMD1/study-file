#include <stdio.h>

int main()
{
    int a, b, c, i;
    scanf("%d", &a);
    for (int d = 0; d < a; d++)
    {
        scanf("%d %d", &c, &b);
        for (i = 1; i <= b; i++)
        {
            for (int d = 1; d <= c; d++)
            {
                if ((d == 1 && i == 1) || (i == 1 && d == c))
                {
                    printf("@");
                }
                else if((d == 1 && i == b) || (i == b && d == c)) {
                    printf("@");
                }
                else if (i == 1 || i == b || d == 1 || d == c)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}