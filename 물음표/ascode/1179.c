#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0) {
            if (i / 10 == 3 && (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)) {
                printf("%d ", i);
            }
            else if (i / 10 == 3 || i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
                printf("%d ", i);
            }
            else if (i / 3 == 0 || i % 3 == 0) {
                printf("%d ", i);
            }
        }
        else if (i % 10 == 3) {
            printf("%d ", i);
        }
    }
}