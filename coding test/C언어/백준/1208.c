#include<stdio.h>
 
int main() {
    int a, b, c, f = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d %d", &c, &b);
        for (int i = 1; i <= b; i++)
        {
            for (int d = 1; d <= c; d++)
            {
                if (i == 1 || i == b || d == 1 || d == c) {
                    if (f == 10) {
                        f = 0;
                        printf("0");
                    }
                    else {
                        printf("%d", f);
                    }
                    f++;
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        f = 1;
 
    }
}