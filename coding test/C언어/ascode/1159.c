#include<stdio.h>

int main() {
    int a, b, arr[31], temp = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int c = 0; c < b; c++)
        {
            for (int j = 0; j < b - 1; j++)
            {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }

            }
        }
        printf("%d %d\n", arr[0], arr[4]);
    }
    return 0;
}