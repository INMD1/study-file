#include <stdio.h>

int main() {
    int a = 1, max = 0, min = 0, result = 0, count;
    int arr[50];

    scanf("%d", &count);
    for(int i = 0; i <count; i++)
    {

        scanf("%d", &a);

        for (int i = 0; i < a; i++) {
            scanf("%d", &arr[i]);
        }

        min = arr[0];
        max = arr[0];

        for (int d = 0; d < a; d++)
        {
            if (arr[d] > max) {
                max = arr[d];
            }
            if (arr[d] < min) {
                min = arr[d];
            }
        }

        result = max + min;
        printf("%d %d %d\n", max, min, max - min);
    }
    return 0;
}