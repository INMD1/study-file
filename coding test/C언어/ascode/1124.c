#include <stdio.h>

int main(void)
{
    int data[1000];
    int i, j, temp = 0;
    int a, b;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &data[i]);

    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < (a - 1) - i; j++) {
            if (data[j] < data[j + 1]) { // 버블 정렬 사용
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    scanf("%d", &b);
    printf("%d", data[b - 1]);
    return 0;

}