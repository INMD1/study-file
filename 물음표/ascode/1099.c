#include <stdio.h>

int main() {
    int a;
    double b = 0, c = 0, result = 0;
    char arr[3];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s %lf %lf", &arr, &b, &c);
        result = (b / c )* 100;

        if (arr[0] == 'C' && arr[1] == 'C') {
            if (result <= 1500) {
                printf("Pass %.2f %%\n", result);
            }
            else {
                printf("Fail %.2f %%\n", result);

            }
        }
        else if (arr[0] == 'C' && arr[1] == 'I')
        {
            if (result <= 400) {
                printf("Pass %.2f %%\n", result);
            }
            else {
                printf("Fail %.2f %%\n", result);

            }
        }
        else if (arr[0] == 'C' && arr[1] == 'D')
        {
            if (result <= 500) {
                printf("Pass %.2f %%\n", result);
            }
            else {
                printf("Fail %.2f %%\n", result);

            }
        }
        else if (arr[0] == 'P' && arr[1] == 'A' || arr[0] == 'C' && arr[1] == 'G')
        {
            if (result <= 100) {
                printf("Pass %.2f %%\n", result);
            }
            else {
                printf("Fail %.2f %%\n", result);

            }
        }
        else if (arr[0] == 'C' && arr[1] == 'A' || arr[0] == 'N' && arr[1] == 'E' || arr[0] == 'A' && arr[1] == 'F' || arr[0] == 'P' && arr[1] == 'M')
        {
            if (result <= 80) {
                printf("Pass %.2f %%\n", result);
            }
            else {
                printf("Fail %.2f %%\n", result);

            }
        }

        result = 0;
    }
}