#include<stdio.h>

int main(void)
{

    int c;
    int min;
    int a[500];
    float result = 0;
    while (1) {
        scanf("%d", &c);
        min = c;

        for (int i = 0; i < c; i++) {
            scanf("%d", &a[i]);
        }
        for (int k = 0; k < c; k++) {
            if (a[k] > 100) {
                a[k] = 0;
                min = min - 1;
            }
            result = result + a[k];

        }




        if (c == 0) {
            break;
        }

        printf("%.2lf\n", result / min);

        min = 0;
        result = 0;

    }
    return 0;
}
