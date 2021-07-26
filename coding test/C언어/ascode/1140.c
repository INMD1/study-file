#include <stdio.h>
#include <string.h>

int main()
{
    int a, count = 0, bad = 0, count2 = 0;
    char x[1000];
    scanf("%d", &a);
    for (int n = 1; n <= a; n++)
    {
        scanf("%s", &x);
        count = strlen(x) - 1;
            for (int i = 0; i < strlen(x); i++)
            {
                if (x[i] != x[count]) {
                    bad++;
                }
                count--;
            }
        if (bad != 0) {
            printf("No...\n");
        }
        else if (bad == 0)
        {
            printf("Yes!\n");
        }
        bad = 0;
    }
    return 0;
}