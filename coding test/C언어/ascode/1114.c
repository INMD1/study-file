#include <stdio.h>

int main() {
    int a, b, arr[101], temp = 0, c = 0, v = 0;
    scanf("%d", &a);
    for (v = 0; v < a; v++)
    {
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < b - 1; j++) {

                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                }
            }
            if (arr[i] % 2 == 1) {
                c++;
            }
        }
        for (int i = 0; i < b; i++)
        {
            if (c == 0) {
                 printf("None");
                 break;
            }
            if (arr[i] % 2 == 1) {
                 printf("%d ", arr[i]);
            }
        }
        printf("\n");
        c = 0;
    }
}