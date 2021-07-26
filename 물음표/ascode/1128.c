
// 점점개선중 일단 예제 결과하고는 일치

#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    int b = 0, c = 0, d;
    char x[100];
    scanf("%d", &a);
    for (int n = 1; n <= a; n++)
    {
        scanf("%d %d", &b, &c);
        scanf("%s", &x);
        d = strlen(x);

        while (d--) {

            if (x[d] == 'L') {
                b--;
            }
            else if (x[d] == 'R') {
                b++;
            }
            else if (x[d] == 'U') {
                c++;
            }
            else if (x[d] == 'D') {
                c--;
            }
        }
        if (b > 30 || b < -30 || c > 60 || c < -60) {
            printf("invalid\n");
        }
        else {
            printf("%d %d\n", b, c);
        }
    }
}
