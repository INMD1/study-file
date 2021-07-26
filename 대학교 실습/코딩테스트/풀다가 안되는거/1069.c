#include <stdio.h>

int main() {
    int a, b;
    int result = 1;
    scanf_s("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf_s("%d", &b);
        for (int c = 1; c <= b; c++) {
            result*=c;
        }
        printf("%d\n", result);
        result = 1;
    }
}

// 21의 값이 -로 나온다 메모
// 오버플로우 현상이 일어난다.