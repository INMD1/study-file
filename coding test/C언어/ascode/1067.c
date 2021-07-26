#include<stdio.h>

int main() {
    int a, b, c = 0, d = 0;
    int count = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0 && i % 2 == 0) {
                count = count + i;
                d++;
        }

    }
    printf("%d %d", d, count);
    return 0;
}