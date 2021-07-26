#include<stdio.h>

int main(void) {

    int min, max, result = 0;
    int a, b = 0, c = 0;
    int arr[1000];
    while (1)
    {
        scanf("%d", &a);
        if (a == 0) {
            return 0;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                scanf("%d", &arr[i]);
                result = result + arr[i];
            }
            result = result / a;

            min = arr[0];
            max = arr[0];

            for (int i = 0; i < a; i++)
            {
                if (arr[i] > max) {
                    max = arr[i];
                }
                else if (arr[i] < min) {
                    min = arr[i];
                }

                if (arr[i] <= result) {
                    b = b + 1;
                }
                else if (arr[i] >= result) {
                    c = c + 1;
                }

            }
            printf("%d %d %d\n", result, b, c);
            b = 0, c = 0, result = 0;

        }
    }
    return 0;
}