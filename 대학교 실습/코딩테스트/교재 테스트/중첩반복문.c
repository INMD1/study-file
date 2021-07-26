#include <stdio.h>

int main() {
    int a;

    while (1) {
        printf("데이터를 입력하시오 : ");
        scanf("%d", &a);

        for (int i = 1; i <= a; i++) {
            printf("*");
        }
        printf("\n");
    }
}