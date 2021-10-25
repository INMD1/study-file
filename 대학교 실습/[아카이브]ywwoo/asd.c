#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    int b = 0, c = 0, d = 0;
    char x[101];
    scanf("%d", &a);
    for (int n = 1; n <= a; n++)
    {
        scanf("%d %d", &b, &c);
        scanf("%s", &x);
        if (b > 30 || b < -30) {
            printf("invalid\n");
        }
        else if (c > 60 || c < -60) {
            printf("invalid\n");
        }else {
            for (int i = 0; i < strlen(x); i++)
            {

                if (x[i] == 'L') {
                    b--;
                }
                else if (x[i] == 'R') {
                    b++;
                }
                else if (x[i] == 'U') {
                    c++;
                }
                else if (x[i] == 'D') {
                    c--;
                }
            }
            if (b > 30 || b < -30) {
                printf("invalid\n");
            }
            else if (c > 60 || c < -60) {
                printf("invalid\n");
            }
            else {
                printf("%d %d\n", b, c);
            }
        }
        b = 0, c = 0, d = 0;
    }
}